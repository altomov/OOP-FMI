#pragma once
#include "Averager.hpp"
#include "MovingAverager.hpp"
#include "PeriodicSampler.hpp"
#include <string>

class Repository{
private:
	std::vector<Subscriber*> subscribers;
public:

	Repository();
	Repository(const Repository&);
	Repository& operator=(const Repository&);

	void add(Subscriber*);

	Subscriber* get(std::string id);
};