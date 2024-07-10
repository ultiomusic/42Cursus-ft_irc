#include "../incs/Client.hpp"

Client::Client(int fd)
{
	this->nickName = "";
	this->userName = "";
	this->mode = 0;
	this->unused = "";
	this->realName = "";
	this->fd = fd;
	this->isRegistered = false;
	this->isPassed = false;
}

const std::string Client::getNickName() const
{
	return (this->nickName);
}

const std::string Client::getUserName() const
{
	return (this->userName);
}

int	Client::getMode() const
{
	return (this->mode);
}

const std::string Client::getUnused() const
{
	return (this->unused);
}

const std::string Client::getRealName() const
{
	return (this->realName);
}

const std::string Client::getName() const
{
	std::string name = this->getNickName() + "!" + this->getUserName() + "@" + this->getUnused();

	return (name);
}

int	Client::getFd() const
{
	return (this->fd);
}

bool	Client::getIsRegistered() const
{
	return (this->isRegistered);
}

bool	Client::getIsPassed() const
{
	return (this->isPassed);
}

void	Client::setNickName(const std::string nickName)
{
	this->nickName = nickName;
}

void	Client::setUserName(const std::string userName)
{
	this->userName = userName;
}

void	Client::setMode(const std::string mode)
{
	this->mode = std::stoi(mode);
}

void	Client::setUnused(const std::string unused)
{
	this->unused = unused;
}

void	Client::setRealName(const std::string realName)
{
	this->realName = realName;
}

void	Client::setIsRegistered(bool isRegistered)
{
	this->isRegistered = isRegistered;
}

void	Client::setIsPassed(bool isPassed)
{
	this->isPassed = isPassed;
}

Client::~Client()
{
	std::cout << "Client " << this->nickName << ", left the server!" << std::endl;
}
