#include <iostream>
#include <string>
using namespace std;

struct Employee{
    char name[50];
    int id;
    float salary;
};

int main()
{    Employee employes[3];
for(int i=0;i<3;i++){
    cout<<"Enter details for employee "<<i+1<<endl;
    cout<<"Name: ";
    cin>>employes[i].name;
    cout<<"Enter ID: ";
    cin>>employes[i].id;
    cout<<"Enter Salary: ";
    cin>>employes[i].salary;
    cout<<endl;
    }
    for(int i=0;i<3;i++){
        cout<<"\nEmployee Details: "<<endl;
        cout<<"Name: "<<employes[i].name<<endl;
        cout<<"ID: "<<employes[i].id<<endl;
        cout<<"Salary: "<<employes[i].salary<<endl;

    }

    return 0;
}
