#pragma once
#include "Card.hpp"
#include <vector>

class Deck
{
private:
	std::vector<Card*> deck;
public:
	Deck();

	void addCard(Card* card);
	void printCards();
};

