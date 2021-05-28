#include<iostream>
using namespace std;
int main(){
	cout<<"Enter a number to get it's reverse: ";
	int user_num,rev_num=0;
	cin>>user_num;
	while(user_num>1){
		rev_num=(rev_num*10)+(user_num%10);
		user_num/=10;
		
	}
	cout<<"The reverse of the given number is: "<<rev_num<<endl;
	return 0;
}

