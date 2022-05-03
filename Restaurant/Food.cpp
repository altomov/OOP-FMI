#include <iostream>
#include "Food.hpp"

Food::Food(int stock, double price, std::string name, double weight)
	: RestaurantItem(ProductType::Food, stock, price)
{
	this->name = name;
	this->weight = weight;
}

std::string Food::getName() const
{
	return name;
}

void Food::setName(std::string newName)
{
	name = newName;
}

double Food::getWeight() const
{
	return weight;
}

void Food::setWeight(double newWeight)
{
	weight = newWeight;
}

bool Food::operator>(const Food& rhs) const
{
	return weight > rhs.weight;
}

void Food::print()
{
	std::cout << stock << name << weight << std::endl;
}
