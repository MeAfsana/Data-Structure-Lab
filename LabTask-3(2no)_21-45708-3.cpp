#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string s;
   cout<<"Enter the string that want to change(s): ";

   getline(cin,s);
    int value;
    cout<<"Enter the value(j): ";
     cin>>value;
     int j=2;

   for(;j<s.length();j=j+3){
            if(s[j]!='\0'){
                    s[j]=char(int(s[j])+value);
               }
              }
   cout<<"Converted string: ";
    for(int j=0;j<s.length();j++)
    {
        cout<<s[j];
        }
    }
