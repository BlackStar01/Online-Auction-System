#ifndef REGULARAUCTION_H
#define REGULARAUCTION_H

#include "Auction.h"
#include <iostream>
using namespace std;

class RegularAuction : public Auction
{
private:
	float duration;

public:

	RegularAuction(const string& name, const list<Items>& listItems, const list<User>& listUsers, float duration)
		: Auction(name, listItems, listUsers), duration(duration) {}
};

#endif

