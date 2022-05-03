#include "Deck.hpp"

Deck::Deck()
{
}

void Deck::addCard(Card* card)
{
	deck.push_back(card);
}

void Deck::printCards()
{
	for (size_t i = 0; i < deck.size(); i++)
	{
		deck[i]->print();
	}
}
