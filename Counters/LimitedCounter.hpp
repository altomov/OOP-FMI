#pragma once

#include "Counter.hpp"

using namespace std;

class LimitedCounter: public virtual Counter
{
protected:
	int max;

public:
	LimitedCounter();
	LimitedCounter(int);
	LimitedCounter(int, int);
	LimitedCounter(int, int, unsigned int);

	virtual void increment() override;
	int getMax() const;
	int getTotal() const;
	unsigned int getStep() const;
};