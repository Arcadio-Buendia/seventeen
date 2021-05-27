#include<iostream>
int main(){
	std::cout<<"Enter two decimal numbers: ";
	float a=0.002, b=3.442; //float data type is used when we need decimal points
	std::cin>>a>>b;
	float sum=a+b;
	std::cout<<"The sum is: "<<sum<<std::endl;
	return 0;
}
