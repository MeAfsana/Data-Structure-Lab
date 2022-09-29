#include<iostream>

using namespace std;
int main()
{
    int arr1[10], arr2[15], arr3[30];
    int size1, size2, size3, a, b, total;

    cout<<"Enter the Size for First Array: ";
    cin>>size1;
    cout<<"Enter the Size for Second Array: ";
    cin>>size2;
    cout<<"\nEnter "<<size1<<" Elements for First Array: ";
    for(a=0; a<size1; a++)
        cin>>arr1[a];
    cout<<"\nEnter "<<size2<<" Elements for Second Array: ";
    for(a=0; a<size2; a++)
        cin>>arr2[a];

    for(a=0; a<size1; a++)
    {
        arr3[a] = arr1[a];
    }
    for(b=0; b<size2; b++)
    {
        arr3[a] = arr2[b];
        a++;
    }
    size3 = a;

    for(b=0; b<(size3-1); b++)
    {
        for(a=0; a<(size3-1); a++)
        {
            if(arr3[a]<arr3[a+1])
            {
                total = arr3[a];
                arr3[a] = arr3[a+1];
                arr3[a+1] = total;
            }
        }
    }
    cout<<"\nMerged Array in reverse form:\n";
    for(a=0; a<size3; a++)
    {
        if(a==(size3-1))
            cout<<arr3[a];
        else
            cout<<arr3[a]<<" ";
    }
    cout<<endl;
    return 0;
}
