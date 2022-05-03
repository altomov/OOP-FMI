#include "Drink.hpp"

Drink::Drink(const std::string name, const std::string code, const double price, const double alcoholContent)
{
	this->name = name;
	this->code = code;
	this->price = price;
	this->alcoholContent = alcoholContent;
}

double Drink::getAlcoholContent() const
{
	return alcoholContent;
}

void Drink::setAlcoholContent(const double newAlcoholContent)
{
	alcoholContent = newAlcoholContent;
}
