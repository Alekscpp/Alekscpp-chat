#include "function.h"

#include <QApplication>

Chat_Window *chat_wind;

chat_client client;

QString text_to_send;

QString received_mes;

std::string ip_server="ws://45.66.8.94:9001";

std::queue<QString> message_queue;

bool have_message_to_send=false;



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    chat_wind=new Chat_Window();

    chat_wind->show();

    auto web_thread = std::async(std::launch::async, [&]()
                {
        start_client(client);
    });

    return a.exec();

    //web_thread.get();
}
