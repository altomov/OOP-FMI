#pragma once

using namespace std;

class Request
{
protected:
	string message;
	string sender;
	static unsigned int count;
	unsigned int id;
	
public:
	Request();
	Request(const string& message, const string& sender);

	string getMessage() const;

	string getSender() const;

	int getCount() const;
	int getID() const;
};