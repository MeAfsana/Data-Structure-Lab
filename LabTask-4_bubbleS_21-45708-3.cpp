#include<iostream>
using namespace std;

int main()
{
    int arr[6]= {2,4,6,3,1,8};
    for(int i=0; i<6-1; i++)
        for(int j=0; j<6-i-1; j++)
        if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);

            for(int i=0; i<6; i++)
             cout<<arr[i]<<"\t";

  return 0;
}
