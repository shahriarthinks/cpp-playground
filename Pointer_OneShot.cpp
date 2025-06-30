#include <iostream>
using namespace std;
int main(){
    int x=5,y=15;
    cout<<"Value of x: "<<x<<endl;
    cout<<"Address of x: "<<&x<<endl;
    int *ax,*ay;
    int *ax1,*ay1;
    int *ax2,*ay2;
    float *af;
    ax=&x;
    ax1=&x;
    ax2=&x;
    ay=&y;
    ay1=&y;
    ay2=&y;
    *ax=20;
    *ax1=40;
    cout<<"Address of x: "<<ax<<endl;
    cout<<"Value of x: "<<*ax<<endl;
    cout<<"Value of x: "<<*ax1<<endl;
    cout<<"Value of x: "<<*ax2<<endl;
    cout<<"Address of y: "<<ay<<endl;
    cout<<"Value of y: "<<*ay<<endl;
    return 0;
}
