#ifndef REGULARAUCTION_H
#define REGULARAUCTION_H

#include "Auction.h"
#include <iostream>
using namespace std;

class ReservedAuction : public Auction
{
private:
	int minimum_users;

public:

	ReservedAuction(const string& name, const list<Items>& listItems, const list<User>& listUsers, int minimum_users)
		: Auction(name, listItems, listUsers), minimum_users(5) {}
};

#endif


