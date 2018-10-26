//Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables. (Hint: use sizeof )

#include<iostream>
using namespace std;

int main(){

// declare variables
int ivar;
double dvar;
bool bvar;
float fvar;
char cvar;

int *iptr = &ivar;		//pointer to integer
double *dptr =&dvar;	//pointer to double
bool *bptr =&bvar;		//pointer to boolen
float *fptr =&fvar;		//pointer to float
char *cptr =&cvar;		//pointer to character



	cout << "Size of integer pointer " << sizeof(iptr) <<endl;
	cout << "Size of double pointer " << sizeof(dptr) <<endl;
	cout << "Size of boolen pointer " << sizeof(bptr) <<endl;
	cout << "Size of float pointer " << sizeof(fptr) <<endl;
	cout << "Size of character pointer " << sizeof(cptr) <<endl;
	cout <<" \n";

	cout << "size of integer variable " << sizeof(ivar) <<endl;
	cout << "size of double variable " << sizeof(dvar) <<endl;
	cout << "size of boolen variable " << sizeof(bvar) <<endl;
	cout << "size of float variable " << sizeof(fvar) <<endl;
	cout << "size of character variable " << sizeof(cvar) <<endl;

return 0;
}		  
