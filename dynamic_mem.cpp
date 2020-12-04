#include<iostream>
using namespace std;
int main(){
	int size=0;
	int *ptr;
	cout <<"Enter the size of array you want to pe create "<<endl;
	cin>>size;
	ptr = new int[size];
	cout << "Enter the value to be stored in the array "<<endl;
	for(int i=0;i<size;i++){
		cin>>ptr[i];
	}
	cout <<"Value in the array are : "<<endl;
	for(int i=0;i<size;i++){
		cout <<ptr[i] <<" ";
	}
	return 0;
}
