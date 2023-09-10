#ifndef USER_H
#define USER_H

#include <iostream>
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
	string get_balance() {}
	void set_username(string username) {}
	void set_password(string username) {}
	void set_balance(string username) {}

	void suscribe_auction(const Auction& auction);
	void make_bid(const Auction& auction, float bid);
	void give_up(const Auction& auction);

};


#endif




