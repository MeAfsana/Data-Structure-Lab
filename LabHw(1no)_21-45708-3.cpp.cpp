#include<iostream>
using namespace std;

int main()
{
    int array[8];
    cout<<"Input the 8 array elements: ";
    for(int i=0;i<8;i++){
    cin>>array[i];
}
    int a;
    int counter=0;
    cout<<" Input integer : ";
    cin>>a;
    for(int i=0;i<8;i++)
        {
            if(array[i]==a){
            counter++;
            continue;
        }
    }

    cout<< a <<"occuers : "<<counter<<" times.";
}
