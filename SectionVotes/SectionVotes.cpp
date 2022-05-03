#include <iostream>
#include <fstream>
#include "SectionVotes.hpp"
#include "ElectionResultsDatabase.hpp"

using namespace std;

SectionVotes::SectionVotes()
{

}

SectionVotes::SectionVotes(int party1Votes, int party2Votes, int party3Votes)
{
	this->party1Votes = party1Votes;
	this->party2Votes = party2Votes;
	this->party3Votes = party3Votes;
}

int SectionVotes::votesForParty(Party party) const
{
	if (party == PARTY1) return party1Votes;
	else if (party == PARTY2) return party2Votes;
	else if (party == PARTY3) return party3Votes;
}

ostream& operator << (std::ostream& out, const SectionVotes& test)
{
	out << test.party1Votes << " " << test.party2Votes << " " << test.party3Votes << endl;
	return out;
}

istream& operator >> (istream& in, SectionVotes& test)
{
	int votes;
	in >> votes;
	test.party1Votes = votes;

	in >> votes;
	test.party2Votes = votes;

	in >> votes;
	test.party3Votes = votes;

	return in;


}	