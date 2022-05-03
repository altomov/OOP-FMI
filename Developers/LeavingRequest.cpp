#include <iostream>
#include "LeavingRequest.hpp"

using namespace std;

LeavingRequest::LeavingRequest()
{
	
}

LeavingRequest::LeavingRequest(const string& sender)
{
	message = "I want to leave!";
	this->sender = sender;
	count++;
	id = count;
}