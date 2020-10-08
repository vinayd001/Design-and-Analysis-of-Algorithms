//Q1.Without implementing modulus or division operator, tell if a number is even or odd
#include<iostream>
using namespace std;

bool isEven(int n){
	bool isEven = true;
	for(int i=1;i<=n;i++){
		isEven = !isEven;
	}
	return isEven;
}
int main(){
	int n;
	cout<<"Enter n : ";
	cin>>n;
	isEven(n)? cout<<"Even" : cout<<"Odd";
	return 0;
}
