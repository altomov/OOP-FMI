#pragma once
#include <string>
#include "LeavingRequest.hpp"
#include "PromotionRequest.hpp"


using namespace std;

class TeamLead;

class Developer
{
protected:
	string name;
	double salary;
	TeamLead* teamLead;

public:
	Developer();
	Developer(const string& name);

	string getName() const;

	double getSalary() const;
	void setSalary(double);

	TeamLead* getTeamLead() const;

	void setTeamLead(TeamLead* lead);

	void raiseSalary(double amount);

	void setInitialSalary(double amount);

	void sendLeavingRequest();
	void sendPromotionRequest(double amount);
};