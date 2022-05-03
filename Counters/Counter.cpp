#include <iostream>
#include "Counter.hpp"

using namespace std;

Counter::Counter()
{
	initial = 0;
	step = 1;
}

Counter::Counter(int initial)
{
	this->initial = initial;
	step = 1;
}

Counter::Counter(int initial, unsigned int step)
{
	this->initial = initial;
	this->step = step;
}

void Counter::increment()
{
	initial = initial + (int)step;
}

int Counter::getTotal() const
{
	return initial;
}

unsigned int Counter::getStep() const
{
	return step;
}