#pragma once
#include <string>
class Products
{
protected:
	std::string name;
	std::string code;
	double price;
public:
	Products() = default;
	Products(const std::string name, const std::string code, const double price);

	std::string getName() const;
	std::string getCode() const;
	double getPrice() const;

	void setName(const std::string newName);
	void setCode(const std::string newCode);
	void setPrice(const double newPrice);

	virtual ~Products() = default;
};

