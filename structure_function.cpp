#include <iostream>

using namespace std;
struct student {
    char name[50];
    float grade;
    int age;
    };
    void checkpass(student s){
    if(s.grade>=50){cout<<s.name<<" passed"<<endl;}
    else {cout<<s.name<<" failed"<<endl;}}
    int main(){
    student s;
    cout<<"Enter Name: ";
    cin>>s.name;
    cout<<"Enter Age: ";
    cin>>s.age;
    cout<<"Enter Marks: ";
    cin>>s.grade;
    cout<<endl;
    cout<<"\nStudent Information: "<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Age: "<<s.age<<endl;
    checkpass(s);
    return 0;
}
