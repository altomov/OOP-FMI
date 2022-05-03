#include "Audio.hpp"
#include <iostream>

void Audio::print_debug_state() const
{
	std::cout << name << " " << size << " " << extension << " " << length << " " << performer << std::endl;
}
