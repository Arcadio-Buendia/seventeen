//Program to print the sum of all numbers in a given range. By Prabin.
#include<iostream>
using namespace std;
int main(){
	cout<<"\n This program will give the sum of numbers in a given range. \n \n Give two numbers to describe the range: ";
	int beg,end,sum=0;
	cin>>beg>>end;
	while(beg<end){
		sum+=beg;
		beg++;
	}
	cout<<"\n Sum of all numbers in the range is: "<<sum<<endl;
	return 0;
}
