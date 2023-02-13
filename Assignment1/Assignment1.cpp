#include <iostream>
using namespace std;

long hms_to_secs(int hours, int minutes, int seconds);

int main()
{
	int hours = 0, minutes = 0,seconds = 0 ;
	char colon1, colon2;
	while(true){
		cout << "Enter value for time (format -> hrs:mins:secs  eg. 12:59:59): ";
		if((cin >> hours >> colon1 >> minutes >> colon2 >> seconds) && (colon1 == ':') && (colon2 == ':') && hours <= 23 && hours > 0  && minutes > 0 && seconds > 0 && minutes <= 59 && seconds <= 59)
			cout << "Time value in seconds: " << hms_to_secs(hours,minutes,seconds) << endl;
		else
			cout << "Wrong format OR Invalid input, Try Again."<<endl;
	}
	return 0;
}

inline long hms_to_secs(int hours, int minutes, int seconds){
	return (3600 * hours) + (minutes * 60) + (seconds);
}