#include<iostream>

using namespace std;
int main()
{
    int arr[7]={1,3,5,1,10,12,3};
    cout<<"The Array : ";
    for(int a=0;a<8;++a)
    cout<<arr[a]<<"  ";

    cout<<"\nThe Uncommon Elements are : ";
    for(int a=0;a<8;a++)
    {
        int b;
        for(b=0;b<a;b++)
        {
            if(arr[a]==arr[b])
            {
                break;
            }
        }
        if (a == b)
            cout<<arr[a]<<" ";
    }
    return 0;
}
