#include "Vehicle.hpp"
#include <string>

Vehicle::Vehicle()
{
}

Vehicle::Vehicle(std::string marka, std::string model, int year, std::string problem, int problemType)
{
	this-> marka = marka;
	this->model = model;
	this->year = year;
	this->problem = problem;
	this->problemType = problemType;
}

std::string Vehicle::getMarka()
{
	return marka;
}

std::string Vehicle::getModel()
{
	return model;
}

int Vehicle::getYear()
{
	return year;
}

std::string Vehicle::getProblem()
{
	return problem;
}

int Vehicle::getProblemType()
{
	return problemType;
}