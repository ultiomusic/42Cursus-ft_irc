#ifndef SERVER_HPP
#define SERVER_HPP

#include "headers.hpp"

class	Client;
class	Channel;

class Server
{
	private:
		std::string						password;
		std::string						name;
		int								port;
		int								socketFd;
		struct sockaddr_in				sockAddr;
		struct pollfd					fds[MAX];
		std::map<int, Client*>			clients;
		std::map<std::string, Channel*>	channels;
	public:
		Server(int port, std::string password);
		void	run();
		void	newClient();
		void	handler(Client *client);
		void	nick(Client *client, std::vector<std::string> tokens);
		void	user(Client *client, std::vector<std::string> tokens);
		void	pass(Client *client, std::vector<std::string> tokens);		
		void	join(Client *client, std::vector<std::string> tokens);
		void	privmsg(Client *client, std::vector<std::string> tokens);
		void	part(Client *client, std::vector<std::string> tokens);
		void	quit(Client *client, std::vector<std::string> tokens);
		void	kick(Client *client, std::vector<std::string> tokens);
		void	topic(Client *client, std::vector<std::string> tokens);
		void	op(Client *client, std::vector<std::string> tokens);
		void	help(Client *client, std::vector<std::string> tokens);
		static void	signalHandler(int sigNum);
		bool	isClientExist(std::string nickName);
		void	checkRegister(Client *client);
		void	parser(std::vector<std::string> *tokens, std::string cmd);
		void	sender(int fd, std::string msg);
		void	sendError(Client *client, int code, std::vector<std::string> tokens);
		bool	isClientInChannel(Client *client, Channel *channel);
		~Server();
};

#endif
