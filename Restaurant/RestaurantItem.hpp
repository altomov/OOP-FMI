#pragma once

enum class ProductType
{
	Food,
	Drink,
	Invalid,
};

class RestaurantItem
{
protected:
	ProductType type;
	int stock;
	double price;
public:
	RestaurantItem(ProductType = ProductType::Invalid, int stock = 0, double price = 0);
	ProductType getType() const;
	int getStock() const;
	double getPrice() const;

	void setStock(int newStock);
	void setPrice(double newPrice);
	virtual void print() = 0;

	virtual ~RestaurantItem() = 0;
};

