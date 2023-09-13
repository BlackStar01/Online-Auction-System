#include "User.h"

User::~User()
{
    cout << "Destroy user " << this->get_username() << endl;
}

string User::get_username()
{
    return username;
}

string User::get_password()
{
    return password;
}

float User::get_balance()
{
    return balance;
}

void User::set_username(string new_username)
{
    username = new_username;
}

void User::set_password(string new_password)
{
    password = new_password;
}

void User::set_balance(float new_balance)
{
    balance = new_balance;
}

void User::make_bid(const Auction& auction, float bid)
{
    Bid new_bid(this->get_username(), bid);
    auction.get_listBids().push_back(new_bid);
}

void User::give_up(const Auction& auction)
{
}
