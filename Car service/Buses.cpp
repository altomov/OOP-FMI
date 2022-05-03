#include "Buses.hpp"

Buses::Buses()
{

}

Buses::Buses(std::string marka, std::string model, int year, std::string problem , int problemType, bool putnici)
{
	this->marka = marka;
	this->model = model;
	this->year = year;
	this->problem = problem;
	this->problemType = problemType;
	this->putnici = putnici;
}
