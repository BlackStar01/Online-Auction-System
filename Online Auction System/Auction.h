#ifndef AUCTION_H
#define AUCTION_H

#include <iostream>
#include "User.h"
#include <list>
#include "Items.h"
#include "Bid.h"
using namespace std;

// Regular Auction -> On impose un temps, doit dépasser le minimum estimed du produit à vendre
//	Reserve Price Auction -> Pas de temps, on check pas si le bid dépasse le estimed value

class Auction
{

private:
	string name;
	list<Items> listItems{};
	list<string> listUsers{};
	list<Bid> listBids{};

public:

	// GETTERS AND SETTERS 

	Auction() = default;

	Auction(const string& name, const list<Items>& listItems, const list<User>& listUsers)
		: name(name), listItems(listItems), listUsers(listUsers)
	{
	}
	//~Auction();

	string get_name() const {
		return name;
	}
	list<Items> get_listItems() const {
		return this->listItems;
	}
	list<string> get_listUsers() const {
		return this->listUsers;
	}
	list<Bid> get_listBids() const {
		return this->listBids;
	}

	void set_listItems(const list<Items> listItems) {
		this->listItems = listItems;
	}
	void set_listUsers(const list<string> listUsers) {
		this->listUsers = listUsers;
	}
	void set_listBids(const list<Bid> listBids) {
		this->listBids = listBids;
	}

	void suscribe_auction(User& user);
	virtual void start_auction() {}; // elle est implémentée différemment en fonction de l'enfant
	void close_auction() {};

};

#endif // !AUCTION_H