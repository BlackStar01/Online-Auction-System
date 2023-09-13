#ifndef USER_H
#define USER_H

#include <iostream>
#include "Auction.h"
using namespace std;

class User
{
private:
	string username;
	string password;
	float balance;

public:

	User() = default;
	User(const string& username, const string& password, float balance) : username(username), password(password), balance(balance) {}
	~User();

	string get_username() {}
	string get_password() {}
	float get_balance() {}
	void set_username(string new_username) {}
	void set_password(string new_password) {}
	void set_balance(float new_balance) {}

	void make_bid(const Auction& auction, float bid);
	void give_up(const Auction& auction);

};


#endif




