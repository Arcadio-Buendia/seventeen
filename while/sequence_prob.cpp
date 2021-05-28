//Program to print arbitary number of terms in the sequence: 5,6,11,17,28,45,73,118,......
//By Prabin
#include<iostream>
using namespace std;
int main(){
	double a=5,b=6,n,counter=0;
	cout<<"Enter the number of terms required: ";
	cin>>n;
	cout<<endl;
	while(counter<n){
		cout<<a<<"\t"<<b<<"\t";
		a=a+b;
		b=b+a;
		counter++;
	}
	cout<<endl<<endl;
	return 0;
}
