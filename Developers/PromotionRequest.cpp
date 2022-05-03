#include <iostream>
#include "PromotionRequest.hpp"

using namespace std;

PromotionRequest::PromotionRequest(const string& sender, double amount)
{
	message = "I want a raise!";
	this->sender = sender;
	raise = amount;
	count++;
	id = count;
}

double PromotionRequest::getAmount() const
{
	return raise;
}