#include<iostream>
using namespace std;
int main(){
	cout<<"This program shows weather forecast for the first 28 days of April.\n";
	int week=1;
	while(week<=4){
		int day=1;
		while(day<=7){
			cout<<"Week:"<<week<<" Day:"<<day<<" will see "<<(day+week)/week<<" cm of rainfall\n";
			day++;
		}
		week++;
		cout<<"\v";
	}
	return 0;
}

