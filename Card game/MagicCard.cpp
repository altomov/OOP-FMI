#include <iostream>
#include "MagicCard.hpp"

MagicCard::MagicCard()
{
}

MagicCard::MagicCard(std::string name, size_t idNumber, size_t imageNumber, std::string effect)
{
	this->name = name;
	this->idNumber = idNumber;
	this->imageNumber = imageNumber;
	this->effect = effect;
}

MagicCard::MagicCard(const MagicCard& other)
{
	name = other.name;
	idNumber = other.idNumber;
	imageNumber = other.imageNumber;
	effect = other.effect;
}

std::string MagicCard::getEffect()
{
	return effect;
}

void MagicCard::print()
{
	std::cout << name << " " << idNumber << " " << imageNumber << " " << effect << std::endl;
}