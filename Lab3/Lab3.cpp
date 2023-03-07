#include <iostream>
#include <iomanip>
using namespace std;


long sum(int);
void cmToFeet(double,double*,double*);
void generateFibSequence(int);

int main(){
	int option = 0;
	int N = 0;
	double height = 0;	
	double inches_part = 0;
	int limit = 0;
	while(true){
		cout << "\nWhat would you like to do?"<<endl;
		cout << "1.Calculate sum of first N natural numbers.\n2.Convert height in cm to feet.\n3.Generate Fibonacci sequence to a given number\n4.Quit\n";
		cout << ">> ";
		cin >> option;
		

		switch (option){
		case 1:
			cout << "Enter a value for N: ";
			cin >> N;
			cout << "\nThe sum of the first "<<N<<" natural numbers is "<<sum(N)<<"."<<endl;
			break;
		case 2:
			cout << "Enter height in cm: ";
			cin >> height;
			cmToFeet(height,&height,&inches_part);
			cout << setprecision(1) << "Height in Feet: "<<height<<"ft "<<setprecision(4)<<inches_part << "in"<<endl;
			break;
		case 3:
			cout << "Enter number limit: ";
			cin >> limit;
			generateFibSequence(limit);
			break;
		default:
			cout << "Invalid option. Try again?"<<endl;
			break;
		case 4:
			exit(0);
		}
	}
	return 0;
}


//Using recursion, cos why not (:
long sum(int n){
	if(n == 1)
		return 1;
	else
		return (n + sum( n - 1));
}


void cmToFeet(double heightInCm, double *heightptr, double* inches_part){
	*heightptr = heightInCm / 30.48;
	*inches_part = (*heightptr - (int)*heightptr) * 12;
}

void generateFibSequence(int limit){
	int currentFibNum = 0;
	int tempFibNum = 1;
	int prevFibNum = 0;
	cout << "[ ";
	for(; limit > currentFibNum;){
		cout <<currentFibNum << "  ";
		if(currentFibNum == 0)
			currentFibNum = tempFibNum;
		else{
			tempFibNum = currentFibNum;
			currentFibNum += prevFibNum;
			prevFibNum = tempFibNum;
		}
	}
	cout << " ]";
}