#include "Multimedia.hpp"

Multimedia::Multimedia()
{
}

Multimedia::Multimedia(std::string name, unsigned size, std::string extenstion)
{
	this->name = name;
	this->size = size;
	this->extension = extension;
}

std::string Multimedia::getName()
{
	return name;
}

unsigned Multimedia::getSize()
{
	return size;
}

std::string Multimedia::getExtension()
{
	return extension;
}
