#include <iostream>

using namespace std;

int main()
{
   int a[1000];
   int n;
   int i, j;

   cin >> n;
   for(i=0, j=0; i<1000; i++)
   {
        cout <<"N[" << i << "] = " << j << endl;
        j++;
       if(j == n)
        j = 0;
    }


    return 0;
}
