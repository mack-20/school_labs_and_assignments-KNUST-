#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include "SimAndArts.h"

using std::cout;
using std::endl;
using std::setw;
using std::setfill;
using std::left;
using std::right;






void SimAndArts::loadingSim(){
	for(int run = 0; run < 1; run++){
		for(int dot = 0; dot < 3; dot++){
			printf(".");
			system("timeout 1 > nul");			
		}
		printf("\b\b\b   \b\b\b");
		system("timeout 1 > nul");
	}

	for(int dot = 0; dot < 3; dot++){
		printf(".");
		system("timeout 1 > nul");			
	}

}




void SimAndArts::displayBanner(){
	int heading_width = 70, line_width = 130;
	cout << setw(heading_width)<<"BRIGHT & SON'S CORP"<<endl;
	cout<<left<<setfill('*')<<"  "<<setw(line_width)<<"*"<<setfill(' ')<<endl;
	cout <<right<< setw(heading_width + 9)<<"We offer the best goods and services\n"<<endl;	
}