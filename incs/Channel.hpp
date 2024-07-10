#ifndef CHANNEL_HPP
#define CHANNEL_HPP

#include "headers.hpp"

class Client;

class Channel
{
	private:
		std::string				name;
		std::string				topic;

	public:
		Channel(std::string name, Client *admin);
		
		std::vector<Client *>	clients;
		Client					*admin;

		void					setName(std::string name);
		const std::string		getName() const;

		void					setTopic(std::string topic);
		const std::string		getTopic() const;

		void					addClient(Client *client);
		void					removeClient(Client *client);

		void					channelSender(std::string msg, Client *client);
		std::string				getClientNames();
		~Channel();
};

#endif
