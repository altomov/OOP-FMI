#include "Subscriber.hpp"

Subscriber::Subscriber(std::string id)
{
	this->id = id;
}

std::string Subscriber::getID() const
{
	return id;
}