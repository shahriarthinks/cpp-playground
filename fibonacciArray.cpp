#include <iostream>

using namespace std;

int main()
{
    int fibonacci [22],a;
     fibonacci [0] = 0;
     fibonacci [1] = 1;

    for(int a=2; a<22; ++a){
        fibonacci [a] = fibonacci[a-2]+fibonacci[a-1];
    }
    for(int a=0; a<22; ++a){
        cout<<"fibonacci["<<a<<"]= "<<fibonacci[a]<<endl;
    }
    return 0;
}
