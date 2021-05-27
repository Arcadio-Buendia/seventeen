//Program to print the sum of all numberes till n given by the user
#include<iostream>
using namespace std;
int main(){
	int a,sum;
	cout<<"How many digits do you want a sum of? "<<endl;
	cin>>a;
	sum=a*(a+1)/2;
	cout<<"The sum of "<<a<<" numbers is "<<sum<<endl;
	return 0;
}
