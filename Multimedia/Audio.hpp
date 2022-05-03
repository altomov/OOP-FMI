#pragma once
#include "Multimedia.hpp"
class Audio : public Multimedia
{
private:
	unsigned length;
	std::string performer;
public:
	Audio();
	void print_debug_state() const override;
};

