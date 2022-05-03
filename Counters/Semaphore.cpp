#include <iostream>
#include "Semaphore.hpp"

using namespace std;

Semaphore::Semaphore()
{
	initial = 0;
}

Semaphore::Semaphore(bool choose)
{
	if (choose == true)initial = 1;
	else initial = 0;
}

bool Semaphore::isAvailable()
{
	if (initial > 0)return true;
	else return false;
}

void Semaphore::wait()
{
	if (initial - (int)step >= min)initial = initial - (int)step;
}

void Semaphore::signal()
{
	if (initial + (int)step <= max)initial = initial + (int)step;
}