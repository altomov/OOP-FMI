#pragma once
#include <string>
#include "RestaurantItem.hpp"
class Drink : public RestaurantItem
{
protected:
	std::string name = "";
	double alcohol = 0;
public:
	Drink(int stock = 0, double price = 0, std::string name = "", double alcohol = 0);

	std::string getName() const;
	void setName(std::string newName);

	double getAlcohol() const;
	void setAlcohol(double newAlcohol);

	bool operator>(const Drink& rhs) const;
	void print() override;
};

