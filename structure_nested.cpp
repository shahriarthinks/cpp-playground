#include <iostream>

using namespace std;
struct date{
int month;
int day;
int year;
};
struct employee{
char name[50];
int id;
date joining_date;
};

int main()
{    employee emp1;
date datee;

    cout <<"\nProvide Employee Details: "<< endl;
    cout<<"Name: ";
    cin>>emp1.name;
    cout<<"ID :";
    cin>>emp1.id;
    cout<<"Joining Date: ";
    cin>> emp1.joining_date.day >> emp1.joining_date.month >> emp1.joining_date.year ;
    cout<<endl;
     cout <<"\nProvide Employee Details: "<< endl;
    cout<<"Name: "<<emp1.name<<endl;
    cout<<"ID :"<<emp1.id<<endl;;
    cout<<"Joining Date: "<<emp1.joining_date.day<<"/"<<emp1.joining_date.month<<"/"<<emp1.joining_date.year<<endl ;

    return 0;
}
