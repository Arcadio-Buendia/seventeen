// A program to take the marks obtained by 5 students and show the average of these marks
#include<iostream>
using namespace std;
int main(){
	int counter=0;
        float sum=0,marks;
	cout<<"Please enter the marks for five students: \n";
	while(counter<5){
		cin>>marks;
		sum+=marks;
		counter++;
	}
	float average=sum/5;
	cout<<"The average of the marks is: "<<average<<endl;
	return 0;
}
	

