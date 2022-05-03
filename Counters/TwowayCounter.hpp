#pragma once
#include "Counter.hpp"

using namespace std;

class TwowayCounter: public virtual Counter
{
public:

	using Counter::Counter;

	virtual void decrement();
};