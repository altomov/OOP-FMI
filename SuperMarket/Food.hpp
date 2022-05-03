#pragma once
#include "Products.hpp"

class Food : public Products
{
private:
	double calories;
public:
	Food() = default;
	Food(const std::string name, const std::string code, const double price, const double calories);

	double getCalories() const;

	void setCalories(const double newCalories);
};

