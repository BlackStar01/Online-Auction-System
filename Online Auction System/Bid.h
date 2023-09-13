#ifndef BID_H
#define BID_H

#include <iostream>
using namespace std;

class Bid
{
private:
	string username;
	float value;

public:

	Bid(const string& username, float value) : username(username), value(value){}
};

#endif



