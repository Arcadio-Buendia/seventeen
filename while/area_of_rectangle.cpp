#include<iostream>
 using namespace std;
 int main()
 {
    cout<<"Enter the length followed by the breadth of rectangle \n";
    float length=0,breadth=0;
    cin>>length>>breadth;

    while(length<20)
        {
            cout<<"The rectangle must be bigger than 20 cm long \n";
            cout<<"Please re-enter the length:";
            cin>>length;
        }
    cout<<"Area of the rectange is: "<<length*breadth<<endl;
    return 0;
 }
