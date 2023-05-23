#ifndef FUNCTION_H
#define FUNCTION_H

#include"websock_chat.h"




void on_open(chat_client* client, websocketpp::connection_hdl hdl);


void on_message(chat_client* client, websocketpp::connection_hdl hdl,chat_client::message_ptr msg_ptr);


void on_close(chat_client* client, websocketpp::connection_hdl hdl);

void start_client(chat_client &client);
#endif // FUNCTION_H
