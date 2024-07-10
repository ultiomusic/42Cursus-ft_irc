#ifndef HEADERS_HPP
#define HEADERS_HPP

#define MAX 42
#define BUFFER_SIZE 128

#define	ERR_NOSUCHNICK 401
#define	ERR_NOSUCHCHANNEL 403
#define	ERR_UNKNOWNCOMMAND 421
#define	ERR_NONICKNAMEGIVEN 431
#define	ERR_NICKNAMEINUSE 433
#define	ERR_NOTONCHANNEL 442
#define	ERR_NOTREGISTERED 451
#define	ERR_NEEDMOREPARAMS 461
#define	ERR_ALREADYREGISTERED 462
#define	ERR_PASSWDMISMATCH 464

#include <iostream>
#include <netinet/in.h>
#include <poll.h>
#include <sys/socket.h>
#include <fcntl.h>
#include <unistd.h>
#include <map>
#include <vector>
#include <sstream>
#include <csignal>
#include <string>
#include "Server.hpp"
#include "Client.hpp"
#include "Channel.hpp"

#endif
