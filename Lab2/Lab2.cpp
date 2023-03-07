#include <iostream>
#include <iomanip>
using namespace std;


//Body Mass Index Calculator Program

void BMIResponse(double BMI);


int main(){

	double userHeightInCM = 0, userWeightInKG = 0, BMI;

	cout<<"Enter your height in centimeters: ";
	cin >> userHeightInCM;
	cout << "Enter your weight in kilograms: ";
	cin >> userWeightInKG;

	BMI = userWeightInKG/(userHeightInCM * 0.01);
	cout<< "Your BMI: "<<setprecision(3)<<BMI<<"kg/m2"<<endl;

	BMIResponse(BMI);

	
	return 0;
}

void BMIResponse(double BMI){
	if( BMI >= 40)
		cout << "You are morbidly obese";
	else if( BMI >= 30)
		cout << "You are obese.";
	else if( BMI >= 25)
		cout << "You are overweight.";
	else if( BMI >= 18.5)
		cout<<"Your weight is normal.";
	else
		cout << "You are underweight.";
}