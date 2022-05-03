#pragma once

#include "SectionVotes.hpp"
#include <vector>

using namespace std;

class ElectionResultsDatabase
{
private:
    vector<SectionVotes> total;

public:

    void addResultsFromFile(const char* filename);

    int numberOfSections() const;

    int votesForParty(Party) const;

    Party winningParty() const;

    friend ostream& operator << (ostream& out, const ElectionResultsDatabase& test);
    friend istream& operator >> (istream& in, ElectionResultsDatabase& test);

};