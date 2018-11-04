//[STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method. 

#include<iostream>
using namespace std;

int main(){
	//asking for name and stored into array
	char arr[20];
	cout << "Enter your name: ";
	cin >> arr;
	
	//print string by normal index method
	int i;
	cout << "printing string by normal index method"<<endl;
	for(i=0; arr[i] !='\0'; i++){
	cout<< arr[i] ;
	}
	cout << endl;

	//print string by pointer method
	char *ptr;
	cout << "printing string by pointer method";
	for(i=0; arr[i] !='\0'; i++){
	ptr = &arr[i];
	cout<< *ptr;
	}

return 0;
}