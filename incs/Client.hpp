#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "headers.hpp"

class Channel;

class Client
{
	private:
		std::string		nickName;
		std::string		userName;
		int				mode;
		std::string		unused;
		std::string		realName;
		int				fd;
		bool			isRegistered;
		bool			isPassed;
	public:
		Client(int fd);

		const std::string	getNickName() const;
		const std::string	getUserName() const;
		int					getMode() const;
		const std::string	getUnused() const;
		const std::string	getRealName() const;
		const std::string	getName() const;

		int					getFd() const;

		bool				getIsRegistered() const;
		bool				getIsPassed() const;

		void	setNickName(const std::string nickName);
		void	setUserName(const std::string UserName);
		void	setMode(const std::string HostName);
		void	setUnused(const std::string serverName);
		void	setRealName(const std::string RealName);

		void	setIsRegistered(bool IsRegistered);
		void	setIsPassed(bool IsPassed);
		~Client();
};

#endif
