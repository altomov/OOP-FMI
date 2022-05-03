#include "Card.hpp"
#include "Card.hpp"
#include <iostream>

Card::Card(const Card& other)
{
	name = other.name;
	idNumber = other.idNumber;
	imageNumber = other.imageNumber;
}

std::string Card::getName()
{
	return name;
}

size_t Card::getIDNumber()
{
	return idNumber;
}

size_t Card::getImageNumber()
{
	return imageNumber;
}
