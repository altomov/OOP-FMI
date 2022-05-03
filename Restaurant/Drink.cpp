#include <iostream>
#include "Drink.hpp"

Drink::Drink(int stock, double price, std::string name, double alcohol)
	: RestaurantItem(ProductType::Drink, stock, price)
{
	this->name = name;
	this->alcohol = alcohol;
}

std::string Drink::getName() const
{
	return name;
}

void Drink::setName(std::string newName)
{
	name = newName;
}

double Drink::getAlcohol() const
{
	return alcohol;
}

void Drink::setAlcohol(double newAlcohol)
{
	alcohol = newAlcohol;
}

bool Drink::operator>(const Drink& rhs) const
{
	return alcohol > rhs.alcohol;
}

void Drink::print()
{
	std::cout << stock << name << price << alcohol << std::endl;
}
