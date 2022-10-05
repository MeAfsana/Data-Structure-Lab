#include<iostream>
using namespace std;

int main()
{
    int array[8];
    cout<<"Input the 8 array elements: ";
    for(int i=0;i<8;i++){
            cin>>array[i];

    }
    int counter=0;
    for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
            if(array[i]==array[j]){
            counter++;
            }
    }
    cout<<array[i]<<" occuers : "<<counter<<" times."<<endl;
    counter =0;
             }
return 0;
}
