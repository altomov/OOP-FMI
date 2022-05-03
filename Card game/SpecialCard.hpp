#pragma once
#include "BasicCards.hpp"
#include "MagicCard.hpp"
class SpecialCard : public BasicCards, public MagicCard
{
private:
	size_t level;
public:
	SpecialCard() = default;
	SpecialCard(std::string, size_t, size_t, int, int, std::string, size_t);

	//SpecialCard(const SpecialCard&);

	size_t getLevel();

	void print() override;
};

