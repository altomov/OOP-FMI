#include "Service.hpp"

bool Service::isEnoughSpace(int newProblemPoints)
{
    const int maxPoints = 10;

    if (points + newProblemPoints >= maxPoints)
    {
        return false;
    }
    else return true;
}

void Service::addVehicle(Vehicle& vehicle)
{
    vehicles.push_back(vehicle);
}


