//Program to print the sum of digits in a number, by Prabin
#include<iostream>
using namespace std;
int main(){
	cout<<"Enter a number: ";
	int unum, sum=0;
	cin>>unum;
	int quotient=unum;
	while(quotient%10!=0){
		int remainder;
		remainder=quotient%10;
		quotient=quotient/10;
		sum+=remainder;
	}
	cout<<"Sum of the digits of "<<unum<<" is: "<<sum<<endl;
	return 0;
}
//"!" is the not operator in almost all Programming languages, It will revert the value of 0 into 1 and 1 to 0
