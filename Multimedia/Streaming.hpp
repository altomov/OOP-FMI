#pragma once
#include "Multimedia.hpp"
class Streaming : public Multimedia
{
private:
	std::string path;
public:
	Streaming(std::string);
	void print_debug_state() const override;
};

