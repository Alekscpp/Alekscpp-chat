#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<uwebsockets/App.h>
#include <stdio.h>
#include <stdlib.h>
#include "libpq-fe.h"
#include<string>
#include<Windows.h>
#include <thread>
#include <chrono>


static void
exit_nicely(PGconn* conn)
{
    PQfinish(conn);
    exit(1);
}

void users_to_string(std::string &s,std::set<std::string>* us_ls) {
    s.clear();
    for (auto el : *us_ls) {
        s = s + (el + "\n");
    }
   
}
struct PerSocketData {
   
    std::string user_name;
    std::string user_password;
};

int main() {
    setlocale(LC_ALL, "Russian");
    
    std::string us_name;
    std::string us_password;
    std::set<std::string>* online_user_list=new(std::set<std::string>);
    std::string user_online;
    const char* conninfo;
    PGconn* conn;
    PGresult* res;
    int         nFields;
    int         i,
        j;
    conninfo = " dbname = chat_users user = postgres password = dacota775";
    conn = PQconnectdb(conninfo);

    /* Check to see that the backend connection was successfully made */
    if (PQstatus(conn) != CONNECTION_OK)
    {
        fprintf(stderr, "Connection to database failed: %s",
            PQerrorMessage(conn));
        exit_nicely(conn);
    }

   
    
    
    int latest_user_id = 0;
    
    uWS::App().ws<PerSocketData>("/*", {
            
            .idleTimeout = 16,
            
            
           
            .open = [&](auto*ws) {
                /* Open event here, you may access ws->getUserData() which points to a PerSocketData struct */
                PerSocketData* dat = ws->getUserData();
                dat->user_name = "noname_user";
                std::cout << "function--.open()\n";
               
                
            },
            .message = [&](auto* ws, std::string_view message, uWS::OpCode opCode) {
                
                if (std::string(message.begin(),message.begin() + 9) == "#Logmess#") {

                PerSocketData* d = ws->getUserData();
                
                std::string name = std::string(message.begin() + 9, message.begin() + message.find("\n"));
                std::string password= std::string(message.begin() + (message.find("\n") + 1), message.end());
                std::string req = "SELECT user_password FROM users where user_name='"+name+"'";
                const char* c = req.c_str();
                

                res = PQexec(conn, c);
                
                nFields = PQnfields(res);
                if (PQntuples(res) == 0) {
                    ws->send(std::string("#LogError#"), opCode, true);
                }
                
                    for (i = 0; i < PQntuples(res); i++)
                    {
                        for (j = 0; j < nFields; j++) {
                            if (PQgetvalue(res, i, j) == password) {
                                ws->send(("#LogOk#" + name), opCode, true);
                                ws->subscribe("public");
                                if (d->user_name != "noname_user") {
                                    online_user_list->erase(d->user_name);
                                }
                                d->user_password = PQgetvalue(res, i, j);
                                d->user_name = name;
                                std::cout << "user " << d->user_name << " connected\n ";                                 //std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                                online_user_list->insert(name);
                                users_to_string(user_online, online_user_list);
                                ws->publish("public", ("#OnlUser#" + user_online));
                                ws->send(("#OnlUser#" + user_online), opCode, true);
                                
                            }
                            else {

                                ws->send("#LogError#", opCode, true);
                            }
                        }

                    }
                
                PQclear(res);

                }else if (std::string(message.begin(), message.begin() + 9) == "#Regmess#") {

                    PerSocketData* d = ws->getUserData();

                    std::string name = std::string(message.begin() + 9, message.begin() + message.find("\n"));
                    std::string password = std::string(message.begin() + (message.find("\n") + 1), message.end());
                    std::string req = "SELECT user_name FROM users where user_name='" + name + "'";
                  
                    const char* c = req.c_str();
                    

                    res = PQexec(conn, c);

                    nFields = PQnfields(res);
                    if (PQntuples(res) == 0) {
                        PQclear(res);
                        req = "INSERT INTO users VALUES ('"+name+"','"+password+"');";
                        c = req.c_str();
                        PQexec(conn, c);
                        if (d->user_name!= "noname_user") {
                            online_user_list->erase(d->user_name);
                        }
                        d->user_password = password;
                        d->user_name = name;
                        std::cout << "user " << d->user_name << " connected\n ";
                        ws->send(("#LogOk#"+ name), opCode, true);
                        ws->subscribe("public");
                        online_user_list->insert(name);
                        users_to_string(user_online, online_user_list);
                        ws->publish("public", ("#OnlUser#" + user_online));
                        ws->send(("#OnlUser#" + user_online), opCode, true);

                    }
                    else {
                        ws->send("#RegError#", opCode, true);
                    }
                    
                    PQclear(res);

                }
                else {
                    std::cout << "function--.message()\n";
                    std::cout << "receiv massege: \n" << message << std::endl;;
                    ws->publish("public", message);
                    ws->send(message, opCode, true);

                }
            },
            
            
            .close = [&online_user_list,&user_online](auto*ws, int /*code*/, std::string_view /*message*/) {
                /* You may access ws->getUserData() here */
                
                ws->getUserData();
                 PerSocketData* data=ws->getUserData();
                 std::cout << "User " + data->user_name << " disconnected\n";
                 online_user_list->erase(data->user_name);
                 users_to_string(user_online, online_user_list);
                 ws->subscribe("public");
                 ws->publish("public", ("#OnlUser#" + user_online));
                 ws->unsubscribe("public");
            }
            }).listen(9001, [&](auto* listen_socket) {
                
                if (listen_socket) {
                    std::cout <<"Server start\n"<< "Listening on port " << 9001 << std::endl;
                }
                }).run();
                
                
                PQfinish(conn);
                
                delete online_user_list;
}