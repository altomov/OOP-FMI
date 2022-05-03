#include "Averager.hpp"

Averager::Averager(std::string id) : Subscriber(id) {}

void Averager::signal(Message message)
{
	messages.push_back(message);
}

int Averager::read() const
{
	if (messages.empty() == true)
	{
		return 0;
	}

	int average = 0;
	for (size_t i = 0; i < messages.size(); i++)
	{
		average = average + messages[i].getData();
	}
	return average / messages.size();
}
