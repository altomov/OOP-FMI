#include "Developer.hpp"
#include "TeamLead.hpp"

using namespace std;

Developer::Developer()
{
	name = "";
	salary = 0.0;
	teamLead = nullptr;
}

Developer::Developer(const string& name)
{
	this->name = name;
	salary = 0.0;
	teamLead = nullptr;
}

string Developer::getName() const
{
	return name;
}

double Developer::getSalary() const
{
	return salary;
}

TeamLead* Developer::getTeamLead() const
{
	return teamLead;
}

void Developer::setTeamLead(TeamLead* lead)
{
	teamLead = lead;
}

void Developer::setInitialSalary(double amount)
{
	if (salary == 0.0)
	{
		salary = amount;
	}
}

void Developer::setSalary(double newSalary)
{
	salary = newSalary;
}

void Developer::raiseSalary(double amount)
{
	salary += amount;
}

void Developer::sendLeavingRequest()
{
	if (teamLead != nullptr)
	{
		LeavingRequest leavingRequest(name);
		teamLead->addLeavingRequest(leavingRequest);
	}
}

void Developer::sendPromotionRequest(double amount)
{
	if (teamLead != nullptr)
	{
		PromotionRequest promotionRequest(name, amount);
		teamLead->addPromotionRequest(promotionRequest);
	}
}