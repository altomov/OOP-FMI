#pragma once
#include "Request.hpp"

using namespace std;

class PromotionRequest :public Request
{
protected:
	double raise;

public:
	PromotionRequest(const string& sender, double amount);

	double getAmount() const;
};