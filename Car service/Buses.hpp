#pragma once
#include "Vehicle.hpp"
#include <string>
class Buses : public Vehicle
{
private:
	bool putnici;
public:
	Buses();
	Buses(std::string, std::string, int, std::string, int, bool);
};

