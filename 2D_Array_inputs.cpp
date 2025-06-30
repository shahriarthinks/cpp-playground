#include <iostream>

using namespace std;

int main(){

    int rows; //Declaring the number of rows
    int cols; //Declaring the number of colums
    cout<<"Enter number of rows: ";
    cin>>rows; //cin for rows
    cout<<"Enter number of columns: ";
    cin>>cols; //cin for columns
    int matrix[rows][cols] ;
    cout<<"Enter members of the matrix: "<<endl;

    // First loop for input
    for (int i=0; i<rows; i++){ //Loop for rows
        for (int j=0; j<cols; j++){ //Loop for colums
            cin>> matrix[i][j]; //input for members
        }
    }
    // Second loop for output
    for (int i=0; i<rows; i++){ //Loop for rows
        for (int j=0; j<cols; j++){ //Loop for colums
            cout<<matrix[i][j]<<" "; //output of inputted members
        }
        cout<<endl;
    }

    return 0;
}
