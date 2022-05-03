#include <iostream>
#include "SpecialCard.hpp"

SpecialCard::SpecialCard(std::string name, size_t idNumber, size_t imageNumber, int attack, int deff, std::string effect, size_t level)
{
	this->name = name;
	this->idNumber = idNumber;
	this->imageNumber = imageNumber;
	this->attack = attack;
	this->deff = deff;
	this->effect = effect;
	this->level = level;
}


size_t SpecialCard::getLevel()
{
	return level;
}

void SpecialCard::print()
{
	std::cout << Card::name << " " << Card::idNumber << " " << Card::imageNumber << " " << level << std::endl;
}
