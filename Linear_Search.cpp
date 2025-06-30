#include <iostream>

using namespace std;
int main()
{
    int arr[5]={5,13,6,8,10};
    int target=0;
    cout<<"Enter an element for search: ";
    cin>>target;
    int check=0;

    for(int i=0; i<5; i++){
            if(arr[i]==check){
                check=1;
            } }
        if(check==1){
            cout<<"Found"<<endl;
        }
        else{
            cout<<"Not Found"<<endl;
        }

    return 0;
}
