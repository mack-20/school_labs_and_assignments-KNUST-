#include "Administrator.h"

Administrator::Administrator(){
	char fillPass[11] = "Group6@OOP";
	name = "Bright";

	for(int fillptr = 0; fillptr < 11; fillptr++){
		passcode[fillptr] = fillPass[fillptr];
	}
}

std::string Administrator::getName(){
	return name;
}

char* Administrator::getPasscode(){
	return passcode;
}