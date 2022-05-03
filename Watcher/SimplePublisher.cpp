#include "SimplePublisher.hpp"

void SimplePublisher::subscribe(Subscriber* subscriber)
{
	if (subscriber == nullptr)
	{
		return;
	}
	
	publishers.push_back(subscriber);
}

void SimplePublisher::unsubscribe(Subscriber* subscriber)
{
	for (size_t i = 0; i < publishers.size(); i++)
	{

		if (publishers[i]->getID() == subscriber->getID())
		{
			publishers.erase(publishers.begin() + i);
		}
	}
}

void SimplePublisher::signal(Message message)
{
	for (size_t i = 0; i < publishers.size(); i++)
	{	
		publishers[i]->signal(message);
	}
}