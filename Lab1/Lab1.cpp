#include <iostream>
using namespace std;

int main(){
	int free = 17785;
	string greeting = "Welcome to this class!";
	double free2 = -56.1427;
	char composition[] = "5262778y";

	int a = 5, b = 5, c =5;
	bool amHappy = true;
	string amHappyResponse = (amHappy == true) ? "yes" : "no";

	string stringArray[10] = {"Ama","Kofi","Abena","Oream","Oraimo"};

	cout << "Free: "<<free<<endl;
	cout << "Free2: "<<free2<<endl;
	cout << "Greeting: "<<greeting<<endl;
	cout << "composition: "<<composition<<endl;
	cout << "a,b,c: "<<a<<" "<<b<<" "<<c<<endl;
	cout << "amHappy: "<<amHappyResponse<<endl;


	cout<<"\n\n\nLoading second part of the program.......";
	system("timeout 5 > nul");
	system("cls");


	//Second part of program

	int userAge = 0;
	cout << "How old are you?"<<endl;
	cin >> userAge;
	cout << "You were born in "<<2023 - userAge<<endl;


	cout<<"\n\n\nLoading third part of the program.......";
	system("timeout 5 > nul");
	system("cls");


	//Third part of program
	int Marks[] = {67,71,54,43,82,90};
	cout<<"Third value before change: "<<Marks[2]<<endl;
	Marks[2] = 75;
	cout << "Third value after change: "<<Marks[2]<<endl;
	int AppliedElectricity = Marks[4];
	cout << "Applied Electricity: "<<Marks[4];





	return 0;
}