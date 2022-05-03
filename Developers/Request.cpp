#include <iostream>
#include "Request.hpp"

using namespace std;

unsigned int Request::count = 0;

Request::Request()
{
	
}

Request::Request(const string& message, const string& sender)
{
	this->message = message;
	this->sender = sender;
	count++;
	id = count;
}

string Request::getMessage() const
{
	return message;
}

string Request::getSender() const
{
	return sender;
}

int Request::getCount() const
{
	return count;
}

int Request::getID() const
{
	return id;
}