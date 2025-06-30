#include<iostream>
using namespace std;

int main ()
{
int i, j, a[3][3], b[3][3];

cout<<"Enter the elements of 1st matrix:"<<endl; //Input taking loop
     for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            cout<<"a["<<i<<"]["<<j<<"]="a[i][j]
            cin>>a[i][j];

            }
cout<<"Enter the elements of 2nd matrix:"<<endl;
     for(i=0;i<3;i++)
        for(j=0;j<3;j++){
          cout<<"b["<<i<<"]["<<j<<"]="b[i][j];
           cin>>b[i][j];
        }

cout<<"Matrix addition result: "<<endl; //Addition
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
          cout<<a[i][j] + b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matrix subtraction result: "<<endl; //Subtraction
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
          cout<<"a["<<i<<"]["<<j<<"]="a[i][j] - b[i][j]<<" ";
        }
        cout<<endl;
    }
}
