#include<iostream>
using namespace std;
int main(){
	int num = 5;
	int *ptr;
	cout <<"Address of num "<< &num <<endl;
	cout <<"Value of num "<< num <<endl;
	ptr = &num;
	cout <<"Address of ptr "<<ptr<<endl;
	cout <<"value of ptr pointing to num "<<*ptr<<endl<<endl;
	cout <<"4 asigning to ptr then the value of num is "<<endl;
	*ptr = 4;
	cout <<"value of num is now "<<num<<endl;
	cout <<"value of ptr pointing to num "<<*ptr<<endl;
	return 0;
}
