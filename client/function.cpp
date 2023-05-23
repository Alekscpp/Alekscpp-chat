#include "function.h"


void on_open(chat_client* client, websocketpp::connection_hdl hdl) {

    client->get_alog().write(websocketpp::log::alevel::app, "Connection Open");
    chat_wind->is_connect=true;
    emit chat_wind->status();

}


void on_message(chat_client* client, websocketpp::connection_hdl hdl,chat_client::message_ptr msg_ptr) {



    client->get_alog().write(websocketpp::log::alevel::app, "Received Reply: " + msg_ptr->get_payload());

    message_queue.emplace(QString::fromStdString(msg_ptr->get_payload()));
}


void on_close(chat_client* client, websocketpp::connection_hdl hdl) {
    client->get_alog().write(websocketpp::log::alevel::app, "Connection Closed");

    chat_wind->is_connect=false;
    emit chat_wind->status();
}


void start_client(chat_client &client){



    // set logging policy if needed
    client.clear_access_channels(websocketpp::log::alevel::frame_header);
    client.clear_access_channels(websocketpp::log::alevel::frame_payload);
    //c.set_error_channels(websocketpp::log::elevel::none);

    // Initialize ASIO
    client.init_asio();

    // Register our handlers

    client.set_open_handler(bind(&on_open, &client, ::_1));
    client.set_message_handler(bind(&on_message, &client, ::_1, ::_2));
    client.set_close_handler(bind(&on_close, &client, ::_1));



    // Create a connection to the given URI and queue it for connection once

    websocketpp::lib::error_code ec;
    chat_client::connection_ptr con = client.get_connection(ip_server, ec);
    client.connect(con);

    auto check_mess = std::async(std::launch::async, [&]()
                {
                    while (!client.stopped())
                    {
                        if(chat_wind->isHidden()){
                            client.close(con->get_handle(),websocketpp::close::status::normal,"",ec);
                        }

                        if(!message_queue.empty()){
                            received_mes=message_queue.front();
                            message_queue.pop();
                            emit chat_wind->have_messag();
                            Sleep(100);
                        }
                        if(have_message_to_send){
                            con->send(text_to_send.toStdString());
                            have_message_to_send=false;
                        }
                    }
                });
    // Start the ASIO io_service run loop

    client.run();
}
