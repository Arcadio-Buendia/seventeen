#include<iostream>
using namespace std;
int main(){
	cout<<"Enter the number to which multiplication table is required: ";
	int limit,first_counter=2;
	cin>>limit;
	while(first_counter<=limit){ //while loops continue until the condition is 0
		int counter=1;
		while(counter<=10){ //Nested while loop
			cout<<first_counter<<"x"<<counter<<"="<<first_counter*counter<<endl;
			++counter; //pre-increment operator
		}
		cout<<"\v"; //escape sequence for vertical tab
		first_counter++;//post-decrement operator
	}
	cout<<"Done...\n";
	return 0;
}
			
