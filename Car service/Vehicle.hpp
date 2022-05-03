#pragma once
#include <string>
#include "Service.hpp"

class Vehicle
{
protected:
	std::string marka;
	std::string model;
	int year;
	std::string problem;
	int problemType;
public:
	Vehicle();
	Vehicle(std::string, std::string, int, std::string, int);
	std::string getMarka();
	std::string getModel();
	int getYear();
	std::string getProblem();
	int getProblemType();
};

