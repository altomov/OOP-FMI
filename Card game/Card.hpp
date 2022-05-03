#pragma once
#include <string>
class Card
{
protected:
	std::string name;
	size_t idNumber;
	size_t imageNumber;
public:
	Card() = default;
	Card(const Card&);

	virtual void print() = 0;

	std::string getName();
	size_t getIDNumber();
	size_t getImageNumber();
};

