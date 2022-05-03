#include <iostream>
#include "BasicCards.hpp"

BasicCards::BasicCards()
{
}

BasicCards::BasicCards(std::string name, size_t idNumber, size_t imageNumber, int attack, int deff)
{
	this->name = name;
	this->idNumber = idNumber;
	this->imageNumber = imageNumber;
	this->attack = attack;
	this->deff = deff;
}

BasicCards::BasicCards(const BasicCards& other)
{
	name = other.name;
	idNumber = other.idNumber;
	imageNumber = other.imageNumber;
	attack = other.attack;
	deff = other.deff;
}

int BasicCards::getAttack()
{
	return attack;
}

int BasicCards::getDeff()
{
	return deff;
}

void BasicCards::print()
{
	std::cout << name << " " << idNumber << " " << imageNumber << " " << attack << " " << deff << std::endl;
}
