#include <iostream>

using namespace std;

int main()
{
    int number_to_test,remainder;
    cout<<"Enter your number:"<<endl;
    cin>>number_to_test;

    remainder=number_to_test%2;
     if (number_to_test >=0 && remainder==0)
     cout<<"The number is even"<<endl;
     else
     cout<<"The number is odd"<<endl;

     return 0;
}
