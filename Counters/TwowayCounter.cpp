#include <iostream>
#include "TwowayCounter.hpp"

using namespace std;


void TwowayCounter::decrement()
{
	initial = initial - step;
}