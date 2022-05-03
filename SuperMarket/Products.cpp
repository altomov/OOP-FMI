#include "Products.hpp"

Products::Products(const std::string name, const std::string code, const double price)
{
	this->name = name;
	this->code = code;
	this->price = price;
}

std::string Products::getName() const
{
	return name;
}

std::string Products::getCode() const
{
	return code;
}

double Products::getPrice() const
{
	return price;
}

void Products::setName(const std::string newName)
{
	name = newName;
}

void Products::setCode(const std::string newCode)
{
	code = newCode;
}

void Products::setPrice(const double newPrice)
{
	price = newPrice;
}
