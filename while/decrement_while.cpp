//Program to print all numbers leser than the user given number. By Prabin
#include<iostream>
using namespace std;
int main(){
	cout<<"Enter the number to begin printing: ";
	int beg_num;
	cin>>beg_num;
	while(beg_num>=0){//we want all numbers greater than 0
		cout<<beg_num<<"\n";
		beg_num--;//alternate methods(beg_num-=1 or beg_num=beg_num-1)
	}
	return 0;
}
