#include "Food.hpp"

Food::Food(const std::string name, const std::string code, const double price, const double calories)
{
	this->name = name;
	this->code = code;
	this->price = price;
	this->calories = calories;
}

void Food::setCalories(const double newCalories)
{
	calories = newCalories;
}

double Food::getCalories() const
{
	return calories;
}
