#include<iostream>
using namespace std;
int main(){
	int num1,num2,sum,difference,product, quotient, reminder;;
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	sum=num1+num2;
	difference=num1-num2;
	product=num1*num2;
	quotient=num1/num2;
	reminder=num1%num2;
	cout<<"The sum is: "<<sum<<endl;
	cout<<"The difference is: "<<difference<<endl;
	cout<<"The product is: "<<product<<endl;
	cout<<"The quotient is: "<<quotient<<endl;
	cout<<"The reminder is: "<<reminder<<endl;
	return 0;
}
