#include<iostream>
using namespace std;
int main(){
	cout<<" Enter two numbers: ";
	int a,b;
	cin>>a>>b;
	cout<<"I took a="<<a<<" and b="<<b<<endl;
	int c=a;
	a=b;
	b=c;
	cout<<"I've swapped the values and now  a="<<a<<" and b="<<b<<endl;
	return 0;
}
	
