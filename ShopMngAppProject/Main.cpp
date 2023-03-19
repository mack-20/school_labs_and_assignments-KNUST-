#include <iostream>
#include <cstdlib>//for rand() and system()
#include <list>
#include <string>
#include <stdint.h>
#include "Administrator/Administrator.h"
#include "Customer/Customer.h"
#include "Shop/Shop.h"
#include "Items/Item.h"
#include "SimAndArts/SimAndArts.h"

using std::cout;
using std::endl;
using std::cin;


int main(){
	/*display home page as a method of shop and then whole thing will be in a while loop*/
	Shop shop;
	Administrator admin;

	int8_t programState = 1;
	int8_t tries = 3;
	bool authFail = true;//As it changes the program display and floe also changes.
	//Program runs in an infinite loop and the programState changes as the program runs
	//ProgramState initialized to home page value;
	//What are all the different states of the program.(Exit can be program state 0)

	//Runs until exit.
	while(programState){
		switch(shop.displayHomePage()){
		default:
			cout<<"Really?"<<endl;
			break;
		case 3:
			cout<<"Exiting...";
			programState = 0;
			break;
		case 2:
			cout<<"Customer"<<endl;
			break;
		case 1:
			//Make sure Admin has 3 tries before redirecting.
			while(authFail && tries > 0){
				if(shop.displayAdminPage(admin) == 0){
					authFail = true;
					if(tries == 1)/*When tries = 0, code won't execute*/{
						cout << "Unable to log in due to three consecutive fails. "<<endl;
						cout<<"Redirecting you to the home page";
						SimAndArts::loadingSim();
					}
				}
				else
					authFail = false;
				tries--;
			}
			break;
		}
	}	

	return 0;
}