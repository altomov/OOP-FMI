#pragma once
#include "Card.hpp"
class BasicCards : virtual public Card
{
protected:
	int attack;
	int deff;
public:
	BasicCards();
	BasicCards(std::string, size_t, size_t, int, int);

	BasicCards(const BasicCards&);

	int getAttack();
	int getDeff();

	void print() override;
};

