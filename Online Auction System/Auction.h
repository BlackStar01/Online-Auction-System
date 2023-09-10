#ifndef AUCTION_H
#define AUCTION_H

#include <iostream>
#include "User.h"
#include <list>
#include "Items.h"
using namespace std;

// Regular Auction -> On impose un temps, doit d�passer le minimum estimed du produit � vendre

//	Reserve Price Auction -> Pas de temps, on check pas si le bid d�passe le estimed value

class Auction
{

private:
	string name;
	list<Items> listItems{};
	list<User> listUsers{};

	void start_auction() {}; // elle est impl�ment�e diff�remment en fonction de l'enfant
	void close_auction() {};
public:

	Auction(const string& name, const list<Items>& listItems, const list<User>& listUsers)
		: name(name), listItems(listItems), listUsers(listUsers)
	{
	}

	Auction() = default;

};

#endif // !AUCTION_H