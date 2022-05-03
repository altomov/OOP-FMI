#include "Cars.hpp"

Cars::Cars() {}

Cars::Cars(std::string marka, std::string model, int year, std::string problem, int problemType, bool firmaIliNe)
{
	this->marka = marka;
	this->model = model;
	this->year = year;
	this->problem = problem;
	this->problemType = problemType;
	this->firmaIliNe = firmaIliNe;
}
