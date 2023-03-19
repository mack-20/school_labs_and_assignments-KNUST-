#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include "Customer.h"
#include "../Items/Item.h"

using std::string;
using std::list;
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::setfill;
using std::left;
using std::right;


Customer::Customer(){//Name Address Number

	cout<<right<<setw(100)<<"[To have an amazing customer experience, please answer the following questions]"<<endl;

	cout<<"\nEnter your name(eg. Bright Mensah): ";
	getline(cin,name);

	cout<<"\nEnter your Address(eg. Ayeduase Gate): ";
	getline(cin,address);

	cout<<"\nEnter your mobile number(0548335489): ";
	getline(cin,number);
}

string Customer::getName(){
	return name;
}

string Customer::getNumber(){
	return number;
}


void Customer::purchaseIron(Iron iron){
	//Destroy item object
}