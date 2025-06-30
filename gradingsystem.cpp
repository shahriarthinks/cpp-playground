#include <iostream>

using namespace std;

int main()
{
    int score;
    cout<<"Enter score: ";
    cin>>score;

    if (score >=90 && score <=100)
    {
        cout<<"A"<<endl;
    }
    else if (score >=80 && score <=89)
    {
        cout<<"B"<<endl;
    }
   else if (score >=70 && score <=79)
    {
        cout<<"C"<<endl;
    }
   else if (score >=60 && score <=69)
    {
        cout<<"D"<<endl;
    }
   else if (score<60 && score!=0)
    {
        cout<<"F"<<endl;
    }
    else
    {
        cout<<"This score is not Assigned"<<endl;
    }
    return 0;
}
