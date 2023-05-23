#ifndef WEBSOCK_CHAT_H
#define WEBSOCK_CHAT_H

#include<iostream>

#include"chat_window.h"

#include <QMainWindow>

#include<thread>

#include <QApplication>

#include"client.hpp"

#include"asio_no_tls_client.hpp"

#include <QFile>

#include <QDebug>

#include <QMessageBox>

#include <QTime>

#include <queue>

typedef websocketpp::client<websocketpp::config::asio_client> chat_client;

using websocketpp::lib::placeholders ::_1;

using websocketpp::lib::placeholders ::_2;

using websocketpp::lib ::bind;

typedef websocketpp::config::asio_client::message_type::ptr message_ptr;

extern QString text_to_send;

extern QString received_mes;

extern bool have_message_to_send;

extern std::string ip_server;

extern Chat_Window *chat_wind;

extern chat_client client;

extern std::queue<QString> message_queue;

#endif // WEBSOCK_CHAT_H
