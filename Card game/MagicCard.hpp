#pragma once
#include "Card.hpp"
class MagicCard : virtual public Card
{
protected:
	std::string effect;
public:
	MagicCard();
	MagicCard(std::string, size_t, size_t, std::string);

	MagicCard(const MagicCard&);

	std::string getEffect();

	void print() override;
};

