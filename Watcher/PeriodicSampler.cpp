#include "PeriodicSampler.hpp"

PeriodicSampler::PeriodicSampler(std::string id, size_t period) : Subscriber(id)
{
	this->period = period;
	counter = 0;
}

void PeriodicSampler::signal(Message message)
{

	if (counter == 0)
	{
		messages.push_back(message);
	}
	if (counter % period == 0)
	{
		messages.push_back(message);
	}
	counter++;
}

int PeriodicSampler::read() const
{
	if (messages.empty() == true)
	{
		return 0;
	}
	int value = messages[messages.size() - 1].getData();
	return value;
}

size_t PeriodicSampler::getPeriod() const
{
	return period;
}