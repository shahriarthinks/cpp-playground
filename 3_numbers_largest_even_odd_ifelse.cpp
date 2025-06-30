#include <iostream>
using namespace std;
int main ()
{
    int num1,num2,num3,largest;
    cout<<"Enter 3 integers: ";
    cin>>num1>>num2>>num3;

    if (num1>=num2 && num1>=num3){
        largest = num1;
    }
    if (num2>=num1 && num2>=num3){
        largest = num2;
    }
    if (num3>=num1 && num3>=num2){
        largest = num3;
    }
    cout<<"The largest number is: "<<largest<<endl;
    if (largest%2==0) {
        cout<<"The largest number "<<largest<< " is an even number"<<endl;
    }
    else {
        cout<<"The largest number "<<largest<< " is an odd number"<<endl;
    }
    return 0;
}
