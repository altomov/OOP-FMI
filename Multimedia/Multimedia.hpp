#pragma once
#include <string>

class Multimedia
{
protected:
	std::string name;
	unsigned size;
	std::string extension;
public:

	Multimedia();
	Multimedia(std::string, unsigned, std::string);

	virtual void print_debug_state() const = 0;

	std::string getName();
	unsigned getSize();
	std::string getExtension();

	virtual ~Multimedia() = default;
};

