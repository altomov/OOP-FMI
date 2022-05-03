#pragma once

using namespace std;

class Semaphore
{
private:
	int initial;
	const int min = 0;
	const int max = 1;
	const unsigned int step = 1;
public:
	Semaphore();
	Semaphore(bool);

	bool isAvailable();
	void wait();
	void signal();
};