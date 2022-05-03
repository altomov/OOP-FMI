#pragma once
#include <iostream>
#include <vector>
#include "Products.hpp"
#include "Food.hpp"
#include "Drink.hpp"

class Items
{
private:
	std::vector<Products*> items;
public:
	void addProduct(const Food& food);
	void addProduct(const Drink& drink);
	void removeItem(const std::string code);
	void printProductsPriceCriteria(const double priceCriteria);
	void searchProductByCode(const std::string code);
};

