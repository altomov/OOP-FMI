#pragma once
#include "Request.hpp"

using namespace std;

class LeavingRequest:public Request
{
public:
	LeavingRequest();
	LeavingRequest(const string& sender);
};