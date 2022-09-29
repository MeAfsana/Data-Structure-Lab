#include<iostream>

using namespace std;
int main()
{
   int arr1[10], arr2[10], arr3[10], a, b, c=0, o, tot;
   cout<<"Enter 10 Elements for First Array: ";
   for(a=0; a<10; a++)
      cin>>arr1[a];
   cout<<"Enter 10 Elements for Second Array: ";
   for(a=0; a<10; a++)
      cin>>arr2[a];


   for(a=0; a<10; a++)
   {
      for(b=0; b<10; b++)
      {
         if(arr1[a]==arr2[b])
         {
            tot = 0;
            for(o=0; o<c; o++)
            {
               if(arr1[a]==arr3[o])
                tot++;
            }
            if(tot==0)
            {
               arr3[c] = arr1[a];
               c++;
            }
         }
      }
   }


   cout<<"\nCommon Elements are:\n";
   for(a=0; a<c; a++)
      cout<<arr3[a]<<" ";

   cout<<endl;
   return 0;
}
