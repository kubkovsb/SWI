#pragma once
#include <string>
using namespace std;
class customer
{
private :
	string name;
	string item;
	string order;
	int qty;
	customer* c;
	




public :
	customer(string name);
	/*string AddItem(string item , int qty);*/
	bool IsAvailable(string item, int qty);
	string stock[50] = { "vodka","vodka","vodka","vodka","vodka","jabko","jabko","jabko","jabko","jabko","jabko","jabko","jabko","vodka","vodka" };
};

