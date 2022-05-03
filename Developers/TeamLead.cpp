#include <iostream>
#include "TeamLead.hpp"

using namespace std;

TeamLead::TeamLead(const string& name, double salary)
{
	this->name = name;
	this->salary = salary;
	teamLead = this;
}

vector<Developer*> TeamLead::getTeam() const
{
	return team;
}

void TeamLead::addDeveloperToTeam(Developer* developer, double salary)
{
	team.push_back(developer);
	developer->setInitialSalary(salary);
	developer->setTeamLead(this);
}

void TeamLead::removeDeveloperFromTeam(const string& name)
{
	int help = 0;
	for (int i = 0; i < (int)team.size(); i++)
	{
		if (team[i]->getName() == name)
		{
			help = i;
		}
	}
	team[help]->setTeamLead(nullptr);

	team.erase(team.begin() + help);
}

void TeamLead::increaseTeamSalariesBy(double amount)
{
	for (int i = 0; i < (int)team.size(); i++)
	{
		team[i]->setSalary(team[i]->getSalary() + amount);
	}
}

void TeamLead::decreaseTeamSalariesBy(double amount)
{
	for (int i = 0; i < (int)team.size(); i++)
	{
		team[i]->setSalary(team[i]->getSalary() - amount);
	}
}

void TeamLead::addLeavingRequest(const LeavingRequest& leavingRequest)
{
	leave.push_back(leavingRequest);
}

void TeamLead::addPromotionRequest(const PromotionRequest& promotionRequest)
{
	promote.push_back(promotionRequest);
}

void TeamLead::fulfillLeavingRequests()
{
	for (int i = 0; i < (int)leave.size(); i++)
	{
		for (int j = 0; j < (int)team.size(); j++)
		{
			if (team[j]->getName() == leave[i].getSender())
			{
				team[j]->setTeamLead(nullptr);
				team.erase(team.begin() + j);
			}
		}
	}
	leave.clear();
}

void TeamLead::fulfillPromotionRequests()
{
	for (int i = 0; i < (int)promote.size(); i++)
	{
		string name = promote[i].getSender();
		for (int j = 0; j < (int)team.size(); j++)
		{
			if (team[j]->getName() == name)
			{
				team[j]->setSalary(promote[i].getAmount() + team[j]->getSalary());
			}
		}
	}
	
	promote.clear();
}