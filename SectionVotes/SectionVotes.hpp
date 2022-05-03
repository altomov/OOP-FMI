#pragma once

#include <fstream>

using namespace std;

enum Party
{
    PARTY1 = 0,
    PARTY2 = 1,
    PARTY3 = 2,
};

class SectionVotes
{

private:

    int party1Votes, party2Votes, party3Votes;
    
public:
    SectionVotes();

    SectionVotes(int party1Votes, int party2Votes, int party3Votes);

    int votesForParty(Party) const;

    friend ostream& operator << (ostream& out, const SectionVotes&);
    friend istream& operator >> (istream& in, SectionVotes&);

};

