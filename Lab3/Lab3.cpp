#include <iostream>
#include <iomanip>
using namespace std;


long sum(int);
double cmToFeet(double);
void generateFibSequence(int limit);

int main(){
	int option = 0;
	while(true){
		int N = 0;
		double height = 0;
		int limit = 0;
		cout << "\nWhat would you like to do?"<<endl;
		cout << "1.Calculate sum of first N natural numbers.\n2.Convert height in cm to feet.\n3.Generate Fibonacci sequence to a given number\n4.Quit\n";
		cout << ">> ";
		cin >> option;
		
		//Clears standard input(one way of doing it) since user can enter 1.08 which would
		//end the program, if stdin is not flushed to get rid of unwanted data.
		fflush(stdin);

		switch (option){
		case 1:
			cout << "Enter a value for N: ";
			cin >> N;
			cout << "\nThe sum of the first "<<N<<" natural numbers is "<<sum(N)<<"."<<endl;
			break;
		case 2:
			cout << "Enter height in cm: ";
			cin >> height;
			cout << setprecision(3) << "Height in Feet: "<<cmToFeet(height)<<"ft"<<endl;
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

//Using inline since function is just a one line code implementation
inline double cmToFeet(double heightInCm){
	return (heightInCm * 0.0328084);
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