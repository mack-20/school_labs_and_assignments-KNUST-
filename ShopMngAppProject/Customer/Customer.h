#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>
#include <list>
#include "../Items/Item.h"
using std::string;
using std::list;

class Customer{
private:
	list<Iron> cart;//For now, it should be called cart.
	string name;
	string address;
	string number;
public:
	Customer();
	void purchaseIron(Iron iron);
	void viewIrons();
	string getName();
	string getNumber();
	//return faulty item.


};
#endif