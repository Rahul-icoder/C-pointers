#include<iostream>
using namespace std;
int callbyValue(int a , int b){
	int z=a;
	a = b;
	b = z;
	cout << "Call by Value" <<endl;
	cout << "Value of a is "<<a<<" and b is "<<b<<endl;
}

int callbyadd(int &a, int &b){
	int z=a;
	a = b;
	b = z;
	cout << "Call by Address" <<endl;
	cout << "Value of a is "<<a<<" and b is "<<b<<endl;
}

void callbypointer(int *a , int *b){
	int z = *a;
	*a = *b;
	*b = z;
	cout << "Call by Reference" <<endl;
	cout << "Value of a is "<<*a<<" and b is "<<*b<<endl;
}

int main(){
	int a=4, b=5;
	callbyValue(a,b);     // call by value
	cout << "Value of a is "<<a<<" and b is "<<b<<endl<<endl;
	
	callbyadd(a,b);   // call by address
	cout << "Value of a is "<<a<<" and b is "<<b<<endl<<endl;
	
	callbypointer(&a,&b);   // call by reference
	cout << "Value of a is "<<a<<" and b is "<<b<<endl;
	return 0;
}
