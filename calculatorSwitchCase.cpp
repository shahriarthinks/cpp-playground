#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char operation;

    cout<<"Enter a Number: ";
    cin>>a;

    cout<<"Select Operator: ";
    cin>>operation;

    cout<<"Enter another Number: ";
    cin>>b;

    switch (operation)
    {
    case '+':
        cout<<"Result: "<<a+b<<endl;
        break;
         case '-':
        cout<<"Result: "<<a-b<<endl;
        break;
         case '*':
        cout<<"Result: "<<a*b<<endl;
        break;
         case '/':

        if(b!=0)
        {cout<<"Result: "<<a/b<<endl;}
        else
        {
            cout<<"Error"<<endl;
        }

        break;
         default :
        cout<<"Invalid Operator"<<endl;
        break;
    }
    return 0;
}
