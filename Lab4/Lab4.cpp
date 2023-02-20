#include <iostream>
using namespace std;

class Quadrilateral{
	int x,y;

public:
	void set_values(int x, int y){
		this -> x = x;
		this -> y = y;
	}

	int area(){
		return x * y;
	}
};

int main(){
	Quadrilateral square,rectangle;
	square.set_values(10,10);
	rectangle.set_values(5,10);

	cout << "Area of square: "<< square.area()<<endl;
	cout << "Area of rectangle: "<< rectangle.area()<<endl;
	return 0;
}