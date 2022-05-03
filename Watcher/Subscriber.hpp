#pragma once
#include <string>
#include <vector>
#include "Message.hpp"
class Subscriber
{
protected:
	std::string id;
	std::vector<Message> messages;
	std::vector<Subscriber*> subscribers;

public:
	Subscriber(std::string id);

	std::string getID() const;
	virtual void signal(Message) = 0;
	virtual int read() const = 0;
};

