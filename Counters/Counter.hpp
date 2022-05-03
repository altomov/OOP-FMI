#pragma once

using namespace std;

class Counter
{
protected:
	int initial;
	unsigned int step;
public:
	Counter();
	Counter(int);
	Counter(int, unsigned int);

	virtual void increment();

	int getTotal() const;
	unsigned int getStep() const;
};