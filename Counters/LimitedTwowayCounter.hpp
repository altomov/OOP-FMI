#pragma once
#include "LimitedCounter.hpp"
#include "TwowayCounter.hpp"

using namespace std;

class LimitedTwowayCounter: public LimitedCounter, public TwowayCounter
{
protected:
	int min;
	
public:

	LimitedTwowayCounter(int, int);
	LimitedTwowayCounter(int, int, int);
	LimitedTwowayCounter(int, int, int, unsigned int);

	virtual void increment();
	void decrement() override;

	int getMin() const;
	int getMax() const;
	int getTotal() const;
	unsigned int getStep() const;
};