#pragma once
#include <vector>
#include <string>
#include "RestaurantItem.hpp"
#include "Food.hpp"
#include "Drink.hpp"
class Restaurant
{
private:
	std::vector<RestaurantItem*> items;
public:
	void add(RestaurantItem*);
	void add(Food& food);
	void add(Drink& drink);
	void remove(const size_t);
	void changePrice(const size_t index, const double);
	void changeName(size_t index, const std::string newName);
	void print() const;
	void printNonAlcoholic() const;
};

