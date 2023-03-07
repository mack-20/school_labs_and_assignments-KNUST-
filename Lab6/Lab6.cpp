/*	Pointers
	Author: Mackleode Ben-Boulo
*/

#include <iostream>
using namespace std;

int largestNumberInArray(int arr[],int);
int smallestNumberInArray(int arr[],int);
void largeAndSmallNumberInArray(int arr[],int,int*,int*);

int main(){
	int arr[] = {1,2,3,4,5,0,-5,44,33,23,123,231,4353,124};
	int size = sizeof(arr)/4;
	int largest,smallest;
	largeAndSmallNumberInArray(arr,size,&largest,&smallest);
	cout << largest << " "<< smallest<<endl;
	return 0;
}




int largestNumberInArray(int arr[],int arraySize){
	int largestNumber = arr[0];
	for(int i = 1; i <= arraySize; i++){
		if( arr[i] > largestNumber)
			largestNumber = arr[i];
	}
	return largestNumber;
}


int smallestNumberInArray(int arr[],int arraySize){
	int smallestNumber = arr[0];
	for(int i = 1; i <= arraySize; i++){
		if( arr[i] < smallestNumber)
			smallestNumber = arr[i];
	}
	return smallestNumber;
}

void largeAndSmallNumberInArray(int arr[],int arraySize,int*largest,int*smallest){
	*largest = arr[0];
	*smallest = arr[0];
	for(int i = 1; i <= arraySize; i++){
		if( arr[i] > *largest)
			*largest = arr[i];

		if( arr[i] < *smallest)
			*smallest = arr[i];
	}
}