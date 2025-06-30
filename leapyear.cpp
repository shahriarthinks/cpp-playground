#include <iostream>

using namespace std;

int main()
{ int year;

    cout<<"Enter the year to be tested:"<<endl;
    cin>>year;

    if ( (year%4==0 && year%100!=0) || year%400==0)
        cout<<"Its a leap year"<<endl;
    else
        cout<<"Its not a leap year"<<endl;
         return 0;
}
