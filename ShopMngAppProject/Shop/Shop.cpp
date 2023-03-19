#include <iostream>
#include <list>
#include <string>
#include <iomanip>
#include <string>
#include <conio.h>
#include <string.h>
#include "Shop.h"
#include "../SimAndArts/SimAndArts.h"
#include "../Administrator/Administrator.h"
#include "../Customer/Customer.h"

using std::string;
using std::list;
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::setfill;
using std::left;
using std::right;

Shop::Shop(){
}

int Shop::displayAdminPage(Administrator admin){
	int returnValue;
	int counter = 0;
	char charIN;
	char adminPass[11];

	//Flushes the adminPass array to allow for accurate comparison. Prevents old values in the array from causing
	//undefined behaviour in the program.
	for (int index = 0; index < (int)sizeof(adminPass); index++){
		adminPass[index] = '\0';
	}

	system("cls");
	SimAndArts::displayBanner();

	cout<<"Enter password to access Administrator Account.\nPIN: ";
	//Taking Admin's pin in an encoded way (################)
	while(true){
		charIN = getch();
		if(charIN == 8){
			if(counter > 0){
				printf("\b \b");
				counter--;
			}
			else{
				counter = 0;
			}
		}

		else if(charIN == '\r')
			break;
		else{
			if(counter <= 9){
				adminPass[counter] = charIN;
				counter++;
				printf("#");
			}
			else if(counter == 10){
				adminPass[counter] = '\0';
				printf("#");
			}
			else
				printf("#");
		}
	}


	//Verify PIN
	printf("\nVerifying");
	SimAndArts::loadingSim();

	if(!strcmp(adminPass,admin.getPasscode())){
		printf("\nAccess Granted.\n");
		printf("Loading Administrator's Page");
		SimAndArts::loadingSim();
		returnValue = 3;//For now, Should link to Admin's methods(what admin can do)
	}
	else{
		printf("\nVerification failed\nTry again in T-MINUS 2 seconds\n");
		system("timeout 2 > nul");
		returnValue = 0;
	}


	return returnValue;
}




int Shop::displayHomePage(){
	system("CLS");
	SimAndArts::displayBanner();
	int choice;
	cout << "1.Administrator\n2.Customer\n3.Exit\n";
	cout << ">> ";
	cin >> choice;

	return choice;
}
