#include <iostream>
using namespace std;

int main() {
    int start,end;
    cout<<"Enter starting number: ";
    cin>>start;
    cout<<"Enter ending number: ";
    cin>>end;
    cout << "\nEven and Odd Numbers in the range:\n";

    for (int i=start;i<=end;i++){
            if (i%2==0){
                cout<<i<<" is an even number"<<endl;
            }
            else {
                cout<<i<<" is an odd Number"<<endl;
            }
    }
    return 0;
}
