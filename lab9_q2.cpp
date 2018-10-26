/*Write a program to declare two variables a,b and a pointer variable p (all integer type). Try to understand pointers while doing this.
Point p to a. And store the value pointed by p in b. Print the values of a, b and *p.
Assign values a=2 and b = 3. Print the values of a, b and *p.
Now point p to b. Print the values of a, b and *p.	*/

#include<iostream>
using namespace std;

int main(){
	
	int a=2, b=3, t=b;	//declare variable
	int *p = &a;	//declare pointer and point to a
	t = *p;			//assigh, stor value pointed by p in b

	//printing value a, b and *p
	cout << "a = " << a <<endl;
	cout << "b = " << t << endl;	//here t work as b so that we can not loos the value of b for secound case
	cout << "*p = " << *p <<endl;

	p = &b;	//pointing to b

	//printing value a, b and *p
	cout << "a = " << a <<endl;
	cout << "b = " << b << endl;
	cout << "*p = " << *p <<endl;

return 0;
}
	
