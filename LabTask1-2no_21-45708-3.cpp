#include <iostream>
using namespace std ;

int main ()
{
    int array [13] = {0,1,2,4,6,8,9,11,12,13};
    int x;
    for (x=0 ; x< 14 ; x++)
        if(x% 2 == 0)
        cout << x << " is even \n";
    else
        cout << x << " is odd \n";

    return 0 ;

}
