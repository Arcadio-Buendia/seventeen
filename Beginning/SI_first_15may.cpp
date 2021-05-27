//find the number of months it takes to pay off a loan with an annual interest rate
//This program contains a run time error(finding run time errors is what "hackers" do)
#include<iostream>
using namespace std;
int main(){
	double principal, rate, time, deposit, months;
	cout<<" Enter the loan amount you've taken: ";
	cin>>principal;
	cout<<"Enter the interest rate payable per month: ";
	cin>>rate;
	cout<<"Enter the deposit you make each month: ";
        cin>>deposit;
	time=principal/(deposit-(principal*rate/100));
	cout<<time;
	months=time;
	cout<<"The loan will be paid off in "<<months<<" months"<<endl;
	return 0;
}	
