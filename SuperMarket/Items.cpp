#include "Items.hpp"

void Items::addProduct(const Food& food)
{
	items.push_back(new Food(food));
}

void Items::addProduct(const Drink& drink)
{
	items.push_back(new Drink(drink));
}

void Items::removeItem(const std::string code)
{
	for (int i = 0; i < items.size(); i++)
	{
		if (items[i]->getCode() == code)
		{
			items.erase(items.begin() + i);
		}
	}
}

void Items::printProductsPriceCriteria(const double priceCriteria)
{
	for (int i = 0; i < items.size(); i++)
	{
		if (items[i]->getPrice() <= priceCriteria)
		{
			std::cout << items[i]->getName() << std::endl;
		}
	}
}

void Items::searchProductByCode(const std::string code)
{
	for (int i = 0; i < items.size(); i++)
	{
		if (items[i]->getCode() == code)
		{
			std::cout << i << std::endl;
		}
	}
}
