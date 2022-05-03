#include "MovingAverager.hpp"

MovingAverager::MovingAverager(std::string id, size_t windowSize) : Subscriber(id)
{
	this->windowSize = windowSize;
}

void MovingAverager::signal(Message message)
{
	messages.push_back(message);
}

int MovingAverager::read() const
{
	if (messages.empty() == true)
	{
		return 0;
	}
	int average = 0;
	if (messages.size() <= windowSize)
	{
		for (size_t i = 0; i < messages.size(); i++)
		{
			average = average + messages[i].getData();
		}
		return average / messages.size();
	}
	else
	{
		for (size_t i = messages.size() - 1; i >= messages.size() - windowSize; i--)
		{
			average = average + messages[i].getData();
		}
		return average / (int)windowSize;
	}
}

size_t MovingAverager::getWindowSize() const
{
	return windowSize;
}