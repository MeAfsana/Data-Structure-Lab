#include <iostream>
using namespace std;

int main()
{
    int num[]= {3,15,84,55,5,22,71};
    int i,x,f,S,E,M;

    cout<<"Enter number to search :";
    cin>>x;
    f=0;
    S=0;
    E=6;


    while(S<=E)
    {
        M=(S+E)/2;
        if(x==num[M])
        {
            cout<<"Number found at index "<<M;
            f=1;
            break;
        }
        else if(x>num[M])
        {
            S=M+1;
        }
        else if(x<num[M])
        {
            E=M-1;
        }
    }
    if(f==0)
    {
        cout<<"Number is not found";
    }

    return 0;
}
