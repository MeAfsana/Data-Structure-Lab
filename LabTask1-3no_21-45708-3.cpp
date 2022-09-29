#include <iostream>
using namespace std ;

void OddNo( int a , int b)
{
    cout<<"\nOdd numbers in the range;";
    for (int x= a; x<=b; x++)
    {
        if(x%2 != 0)
        {
            cout<< x <<",";
        }
    }
    cout << endl;
}
int main()
{
    int Start , End ;
    cout<<"Please enter the starting value of the range:";
    cin>>Start;

    cout<<"Please enter the ending value of the range:";
    cin>>End;
    OddNo(Start , End);
    return 0 ;
}
