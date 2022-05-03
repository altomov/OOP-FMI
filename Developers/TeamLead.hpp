#pragma once
#include "Developer.hpp"
#include <vector>

using namespace std;

class TeamLead: public Developer
{
protected:
	vector<Developer*> team;
	vector<LeavingRequest> leave;
	vector<PromotionRequest> promote;
public:

	TeamLead(const string& name, double salary);
	
	vector<Developer*> getTeam() const;
	void addDeveloperToTeam(Developer* developer, double salary);
	void removeDeveloperFromTeam(const string& name);

	void increaseTeamSalariesBy(double amount);
	void decreaseTeamSalariesBy(double amount);

	void addLeavingRequest(const LeavingRequest& leavingRequest);
	void addPromotionRequest(const PromotionRequest& promotionRequest);

	void fulfillLeavingRequests();
	void fulfillPromotionRequests();

};