#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int n;
   int count = 0;
   double media;

   while (n > 0){
    cin >> n;
    if(n>0){
        count++;
        media += n;
    }
   }
   cout<<fixed<<setprecision(2)<<media/count << endl;
    return 0;
}
