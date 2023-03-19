#ifndef ITEM_H_
#define ITEM_H_

#include <string>
using std::string;

class Iron{
private:
	string brand;
	int powerRating;
	string type;
	float price;
	static int ironCount;
public:
	Iron();
	~Iron();
	string getBrand();
	int getPRating();
	string getType();
	float getPrice();

	static int getIronCount();

};



#endif