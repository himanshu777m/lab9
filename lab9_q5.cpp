#include<iostream>
using namespace std;

int main(){
	char str[20], *p;

	cout<<"Enter a 10 character string"<<endl;
	cin>>str;
	
	//shifting top character of string to right
	int i,j;
	for(i=0; i<10; i++){
		for(j=i; j<10; j++){
			p =&str[j];
			cout << *p;
		}
	cout<<endl;
	}

return 0;
}