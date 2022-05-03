#include "Repository.hpp"

Repository::Repository() {}

Repository::Repository(const Repository& repository)
{
	for (size_t i = 0; i < repository.subscribers.size(); i++)
	{
		add(repository.subscribers[i]);
	}
}

void Repository::add(Subscriber* subscriber)
{
	Averager* ptrAverager = dynamic_cast<Averager*>(subscriber);
	if (ptrAverager != nullptr)
	{
		subscribers.push_back(new Averager(*ptrAverager));
	}

	MovingAverager* ptrMovingAverager = dynamic_cast<MovingAverager*>(subscriber);
	if (ptrMovingAverager != nullptr)
	{
		subscribers.push_back(new MovingAverager(*ptrMovingAverager));
	}

	PeriodicSampler* ptrPeriodicSampler = dynamic_cast<PeriodicSampler*>(subscriber);
	if (ptrPeriodicSampler != nullptr)
	{
		subscribers.push_back(new PeriodicSampler(*ptrPeriodicSampler));
	}
}

Repository& Repository::operator=(const Repository& repository)
{
	if (this != &repository)
	{
		for (size_t i = 0; i < subscribers.size(); i++)
		{
			delete subscribers[i];
		}
		subscribers.clear();
		for (size_t i = 0; i < repository.subscribers.size(); i++)
		{
			add(repository.subscribers[i]);
		}
	}
	return *this;
}

Subscriber* Repository::get(std::string id)
{
	for (size_t i = 0; i < subscribers.size(); i++)
	{
		if (subscribers[i]->getID() == id)
		{
			Subscriber* ptr = subscribers[i];
			return ptr;
		}
	}
	return nullptr;
}
