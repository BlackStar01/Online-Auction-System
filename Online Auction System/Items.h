#ifndef ITEMS_H
#define ITEMS_H

#include <iostream>
using namespace std;

class Items
{
private: 
	short id;
	string name;
	float estimed_value;
	float current_bid;
	bool available;

public:
	Items() = default;
	Items(short id, const string& name, float estimed_value, float current_bid, bool available)
		: id(id), name(name), estimed_value(estimed_value), current_bid(current_bid), available(true)
	{
	}

	short get_id() {};
	string get_name() {};
	float get_estimed_value() {};
	float get_current_bid() {};
	bool get_availability() {};

	void set_id(short id) {};
	void set_name(string name) {};
	void set_estimed_value(float estimed_value) {};
	void set_current_bid(float current_bid) {};
	void set_availability(bool available) {};

};

#endif // !ITEMS_H




