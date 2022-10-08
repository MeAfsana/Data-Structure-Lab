#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<"THE NUMBER OF ROWS OF 2-D ARRAY: ";
    cin>>i;
    cout<<"THE NUMBER OF COLUMN OF 2-D ARRAY: ";
    cin>>j;
    int arr[i][j];
    int transpose[j][i];
    for(int a=0;a<i;a++)
    {
    cout<<"THE VALUES OF "<<"ROW"<<a+1<<": ";
    for(int b=0;b<j;b++)
        {
        cin>>arr[a][b];
        transpose[b][a]=arr[a][b];
        }
       }
    cout<<"TRANSPOSE MATRIX OF 2-D ARRAY: "<<endl;



   for(int a=0;a<j;a++){
        for(int b=0;b<i;b++){
            cout<<transpose[a][b]<<" ";
            }
        cout<<endl;
    }
}
