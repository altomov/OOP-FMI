#pragma once
#include <string>
#include "RestaurantItem.hpp"
class Food : public RestaurantItem
{
protected:
	std::string name = "";
	double weight = 0;
public:
	Food(int stock = 0, double price = 0, std::string name = "", double weight = 0);

	std::string getName() const;
	void setName(std::string newName);

	double getWeight() const;
	void setWeight(double newWeight);

	bool operator>(const Food& rhs) const;
	void print() override;
};

