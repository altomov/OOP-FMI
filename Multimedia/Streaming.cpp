#include "Streaming.hpp"
#include <iostream>

Streaming::Streaming(std::string path)
{
	this->path = path;
	name = "";
	size = 0;
	extension = "";
}

void Streaming::print_debug_state() const
{
	std::cout << name << " " << size << " " << extension << " " << path << std::endl;
}
