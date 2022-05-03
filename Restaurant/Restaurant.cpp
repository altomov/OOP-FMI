#include "Restaurant.hpp"

void Restaurant::add(Food& food)
{
	items.push_back(&food);
}

void Restaurant::add(Drink& drink)
{
	items.push_back(&drink);
}

void Restaurant::remove(const size_t index)
{
	items.erase(items.begin() + index);
}

void Restaurant::changePrice(const size_t index, const double newPrice)
{
	items[index]->setPrice(newPrice);
}

void Restaurant::changeName(size_t index, const std::string newName)
{
	Food* foodPtr = dynamic_cast<Food*>(items[index]);
	if (foodPtr != nullptr)
	{
		foodPtr->setName(newName);
	}

	Drink* drinkPtr = dynamic_cast<Drink*>(items[index]);
	if (drinkPtr != nullptr)
	{
		drinkPtr->setName(newName);
	}
}

void Restaurant::print() const
{
	for (auto x : items)
	{
		x->print();
	}
}

void Restaurant::printNonAlcoholic() const
{
	for (auto x : items)
	{
		Drink* drinkPtr = dynamic_cast<Drink*>(x);
		if (drinkPtr)
		{
			Drink zero = Drink(0, 0, "", 0.001);
			if (zero > *drinkPtr)
			{
				drinkPtr->print();
			}
		}
	}
}
