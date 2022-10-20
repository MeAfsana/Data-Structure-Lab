#include<iostream>
using namespace std;

int main()
{
    int arr[6]= {5,9,10,22,3,4};
    int x,y=0;
    cout<<"Enter number to search : ";
    cin>>x;
    for(int i=0; i<6; i++)
        if(arr[i]==x)
        {
            y++;
            cout<<x<<" Number found at "<<i+1<<" index ";
        }
    if(y==0) cout<<"Number not found";

   return 0;
}
