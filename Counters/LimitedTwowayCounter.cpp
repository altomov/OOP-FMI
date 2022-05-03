#include <iostream>
#include "LimitedTwowayCounter.hpp"

using namespace std;

LimitedTwowayCounter::LimitedTwowayCounter(int min, int max)
{
	this->min = min;
	this->max = max;
	initial = 0;
	step = 1;
}

LimitedTwowayCounter::LimitedTwowayCounter(int min, int max, int initial)
{
	this->min = min;
	this->max = max;
	this->initial = initial;
	step = 1;
}

LimitedTwowayCounter::LimitedTwowayCounter(int min, int max, int initial, unsigned int step)
{
	this->min = min;
	this->max = max;
	this->initial = initial;
	this->step = step;
}

void LimitedTwowayCounter::increment()
{
	if (initial + (int)step <= max)
	{
		initial = initial + (int)step;
	}
}

void LimitedTwowayCounter::decrement()
{
	if (initial - (int)step >= min)
	{
		initial = initial - (int)step;
	}
}

int LimitedTwowayCounter::getMin() const
{
	return min;
}

int LimitedTwowayCounter::getMax() const
{
	return max;
}


int LimitedTwowayCounter::getTotal() const
{
	return initial;
}

unsigned int LimitedTwowayCounter::getStep() const
{
	return step;
}