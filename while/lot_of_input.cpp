#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter math scores for your students, seperated by space:\n ";
	float value=0.0; 
	float sum=0.0;
	float countInputs=0.0;
	while(cin>>value)
	{
		
	
		sum+=value;
		countInputs++;
	
	}
    
    float ave=sum/countInputs;
    cout<<"The average of their marks is:"<<ave;
    return 0;
}	