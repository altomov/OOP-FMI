#pragma once
#include <vector>
#include "Vehicle.hpp"
class Service
{
private:
	std::vector<Vehicle> vehicles;
	int points;
public:
	bool isEnoughSpace(int newProblemPoints);
	void addVehicle(Vehicle& vehicle);
};

