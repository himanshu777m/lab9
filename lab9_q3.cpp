//Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method. 

#include<iostream>
using namespace std;

int main(){
	int i, arr[10];
	//stored value in array
	cout << "Enter the 10 element of array";
	for(i=0; i<10; i++){
		cin >> arr[i];
	}
	
	//print array using normal index method
	cout << "printing array using normal index method";
	for(i=0; i<10; i++){
	cout << arr[i] <<endl;
	}
	
	//print aaray using pointer
	cout << "print array using pointer method";
	for(i=0; i<10; i++){
	int *ptr = &arr[i] <<endl;
	cout << *ptr;
	}
	
	
}
