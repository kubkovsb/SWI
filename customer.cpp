#include "customer.h"
#include <string>
#include <iostream>

using namespace std;

customer::customer(string name)
{
	this->name = name;
	this->order = "";
	
}
/*string customer::AddItem(string item, int qty)
{
	this->item = item;
	this->qty = qty;
	this->order =  this-> item +" "+ to_string(qty) ;
	return this->order;
}*/
bool customer::IsAvailable(string item, int qty)
{
	int counter = 0;
	for (int i = 0; i <= 50; i++)
	{
		if (item == stock[i])
		{
			counter++;
			stock[i].clear();
		}
	}
	if (counter >= qty)
	{
		cout << "okay, " <<item << " with quantity of " << qty << " on your way ";

		return true;
	}
	else {
		cout << "sorry , cant help you";
		return false;
	}
}
