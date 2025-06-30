#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter rows and columns for square matrix: ";
    cin>>n;
    int matrix[n][n],sum=0;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Given Matrix: "<<endl;

    for (int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        sum+=matrix[i][i];
    }
    cout<<"The diagonal sum is: "<<sum<<endl;

    return 0;
}

