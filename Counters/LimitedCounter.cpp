#include <iostream>
#include "LimitedCounter.hpp"

using namespace std;

LimitedCounter::LimitedCounter()
{
	max = 1;
	initial = 0;
	step = 1;
}

LimitedCounter::LimitedCounter(int max)
{
	this->max = max;
	initial = 0;
	step = 1;
}

LimitedCounter::LimitedCounter(int max, int initial)
{
	this->max = max;
	this->initial = initial;
	step = 1;
}

LimitedCounter::LimitedCounter(int max, int initial, unsigned int step)
{
	this->max = max;
	this->initial = initial;
	this->step = step;
}

void LimitedCounter::increment()
{
	if (initial + (int)step <= max)
	{
		initial = initial + (int)step;
	}
}

int LimitedCounter::getMax() const
{
	return max;
}

int LimitedCounter::getTotal() const
{
	return initial;
}

unsigned int LimitedCounter::getStep() const
{
	return step;
}