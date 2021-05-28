#include<iostream>
using namespace std;
int main(){
	cout<<"Enter a few numbers: ";
	int value=0,sum=0;
	while(cin>>value){
		sum+=value;
	}
	cout<<"The sum of entered values is: "<<sum<<endl;
	return 0;
}	
