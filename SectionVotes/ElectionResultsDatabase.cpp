#include <iostream>
#include "ElectionResultsDatabase.hpp"
#include <vector>
#include <string>

using namespace std;

Party ElectionResultsDatabase::winningParty() const
{
	int party1, party2, party3;
	party1 = votesForParty(PARTY1);
	party2 = votesForParty(PARTY2);
	party3 = votesForParty(PARTY3);

	if (party1 >= party2 && party1 >= party3) return Party::PARTY1;
	else if (party2 > party1 && party2 >= party3) return Party::PARTY2;
	else if (party3 > party1 && party3 > party2) return Party::PARTY3;
	else return Party::PARTY1;
}

void ElectionResultsDatabase::addResultsFromFile(const char* filename)
{
	ifstream file(filename);
	int firstNum, secondNum, thirdNum;

	while (file >> firstNum >> secondNum >> thirdNum)
	{
		total.push_back(SectionVotes(firstNum, secondNum, thirdNum));
	}
	file.close();
}

int ElectionResultsDatabase::numberOfSections() const
{
	return total.size();
}

int ElectionResultsDatabase::votesForParty(Party party) const
{
	int votes = 0;
	for (int i = 0; i < total.size(); i++)
	{
		votes = votes + total[i].votesForParty(party);
	}

	return votes;
}

ostream& operator << (ostream& out, const ElectionResultsDatabase& test)
{
	for (int i = 0; i < test.numberOfSections(); i++)
	{
		out << test.total[i];
	}
	return out;
}

istream& operator >> (istream& in, ElectionResultsDatabase& test)
{
	SectionVotes groz;
	while (in >> groz)
	{
		test.total.push_back(groz);
	}
	return in;
}