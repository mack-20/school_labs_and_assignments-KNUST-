#include <iostream>
#include "Item.h"

using std::cout;
using std::endl;

/*	Initialization of all methods and static variables within the Iron class
	Iron constructor automatically assigns the member variables to randomly generated
	values based on the given algorithm.
*/

int Iron::ironCount = 0;

Iron::Iron(){

	string brands[5] = {"Novo","Bruhm","Delron","NASCO","Havells"};
	string type[2] = {"Dry Iron","Steam Pressing Iron"};
	int powerR[2] = {1000,750};

	int bi = rand()%5, ti = rand()%2, pri = rand()%2;
	
	this->brand = brands[bi];
	this->powerRating = powerR[pri];
	this->type = type[ti];
	this->price = (19.00 * (bi + 1)) + (49.99 * (ti + 1)) + ((pri + 1) * 15.00);

	//Increases number of irons by 1 everytime an Iron object is created.
	ironCount++;
}

Iron::~Iron(){
	ironCount--;
}


string Iron::getBrand(){
	return brand;
}


int Iron::getPRating(){
	return powerRating;
}

string Iron::getType(){
	return type;
}

float Iron::getPrice(){
	return price;
}

int Iron::getIronCount(){
	return ironCount;
}



/*	Initialization of all methods and static variables within the Laptop class*/