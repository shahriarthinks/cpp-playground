#include <iostream>
#include <string>
using namespace std;
struct student {
    string name;
    float grade;
    int age;};
int main()
{
    student s1;
    cout<<"Enter Name: ";
    cin>>s1.name;
    cout<<"Enter Grade: ";
    cin>>s1.grade;
    cout<<"Enter Age: ";
    cin>>s1.age;
    cout<<"\nStudent Details: "<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"Grade: "<<s1.gr
    ade<<endl;
    return 0;
}
