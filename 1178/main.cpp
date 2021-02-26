#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a[100];
   double n;
   int i;
   cin >> n;
    a[0] = n;

    for(i=1; i<100; i++){
        a[i] = a[i-1]/2.0;

    }
    for(i=0; i<100; i++)
    cout <<"N ["<< i << "] = " <<fixed <<setprecision(4)<< a[i] << endl;
    return 0;
}
