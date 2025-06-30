#include <iostream>

using namespace std;

int main()
{
    int student[2][3];
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<2;i++){
      for(int j=0;j<3;j++){
        cin>>student[i][j];
    }
    }
    for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
        cout<<student[i][j]<<" ";
    }
    cout<<endl;
    }
    for(int i=0;i<2;i++){
            double sum=0;
            for(int j=0;j<3;j++){
         sum+=student[i][j];
    }
    float avg = sum / 2;
    cout<<"Row:"<<i+1<<endl;
    cout<<"Sum:"<<sum<<endl;
    cout<<"Average:"<<avg<<endl;
    }


    return 0;
}
