/*
	[Administrator.h]
	Contains class definitions and member method declarations of Admin.
	
Implementation details in Administrator.cpp
*/
#ifndef ADMINISTRATOR_H_
#define ADMINISTRATOR_H_

#include <string>
using std::string;

class Administrator{
private:
	string name;
	char passcode[11];
public:
	Administrator();
	void viewInventory();
	void updateInventory();
	void registerCashier(/*Cashier name or Object??*/);
	void manageCashiers();
	void trackPurchases();

	//Try
	string getName();
	char* getPasscode();


};

#endif