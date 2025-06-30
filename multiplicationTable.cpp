#include <iostream>
using namespace std;
int main ()
{
    int n,multiplicationTable;
    cout<<"Multiplication Table of: ";
    cin>>n;
    for (int i=1;i<=10;i++){
        multiplicationTable=n*i;

    cout<<n<<"*"<<i<<" = "<<multiplicationTable<<endl;}
}
