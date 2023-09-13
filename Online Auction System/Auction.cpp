#include "Auction.h"

Auction::~Auction()
{
}

void Auction::start_auction() {
	cout << "Started ... ";
}

void Auction::close_auction() {
	cout << "Closed ... ";
}

void Auction::suscribe_auction(User& user)
{
	this->listUsers.push_back(user.get_username());
}
