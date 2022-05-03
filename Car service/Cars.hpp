#pragma once
#include "Vehicle.hpp"
#include <string>
class Cars: public Vehicle
{
private:
	bool firmaIliNe;
public:
	Cars();
	Cars(std::string, std::string, int, std::string, int, bool);
};

