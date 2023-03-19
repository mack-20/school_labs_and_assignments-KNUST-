#ifndef SHOP_H_
#define SHOP_H_

#include <string>
#include <list>
#include "../Administrator/Administrator.h"
#include "../Customer/Customer.h"
using std::string;
using std::list;

class Shop{
private:
	//inventory
	string name;

public:
	Shop();
	int displayAdminPage(Administrator admin);
	int displayHomePage();
	void displayCustomerPage(Customer customer);
	//void cashIn();
	//void cashOut();
	//void showInventory();
	//void giveReceipt();

};
#endif