#pragma once
#include <vector>
#include "Message.hpp"
#include "Subscriber.hpp"

class Publisher
{
protected:
	
	std::vector<Subscriber*> publishers;

public:
	virtual void subscribe(Subscriber*) = 0;

	virtual void unsubscribe(Subscriber*) = 0;;

	virtual void signal(Message) = 0;
};

