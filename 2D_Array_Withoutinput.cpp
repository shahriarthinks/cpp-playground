#include <iostream>

using namespace std;

int main()
{
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; // Taking the values in 2D Array
    int rows=4; //Declaring the number of rows
    int cols=3; //Declaring the number of colums

    for (int i=0; i<rows; i++){ //Loop for rows
        for (int j=0; j<cols; j++){ //Loop for colums

        cout<<"matrix["<<i<<"]["<<j<<"]="<<matrix[i][j]<<endl; //Prog. Statement for elements,INDEXING
        }
    }
    return 0;
}
