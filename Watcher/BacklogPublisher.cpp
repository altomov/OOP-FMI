#include "BacklogPublisher.hpp"

void BacklogPublisher::subscribe(Subscriber* subscriber)
{
	if (subscriber == nullptr)
	{
		return;
	}

	for (size_t i = 0; i < messages.size(); i++)
	{
		subscriber->signal(messages[i]);
	}
	publishers.push_back(subscriber);
}

void BacklogPublisher::unsubscribe(Subscriber* subscriber)
{
	for (size_t i = 0; i < publishers.size(); i++)
	{
		if (publishers[i]->getID() == subscriber->getID())
		{
			publishers.erase(publishers.begin() + i);

		}
	}
}

void BacklogPublisher::signal(Message message)
{
	for (size_t i = 0; i < publishers.size(); i++)
	{
		publishers[i]->signal(message);
	}
	messages.push_back(message);
}
