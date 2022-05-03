#pragma once
#include "Products.hpp"

class Drink : public Products
{
private:
	double alcoholContent;
public:
	Drink() = default;
	Drink(const std::string name, const std::string code, const double price, const double alcoholContent);

	double getAlcoholContent() const;

	void setAlcoholContent(const double newAlcoholContent);
};

