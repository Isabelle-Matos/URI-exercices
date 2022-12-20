#include <iostream>

using namespace std;

int main()
{
   int i, n, x;
   int count = 0;
   int count1 = 0;
   int count2 = 0;
   cin >> n;

   while(count <n){
    cin >> x;
    count++;
    if(x>= 10 && x <=20){count1++;}
    else{count2++;}
   }
   cout << count1 <<" in" << endl;
   cout << count2 <<" out" << endl;
    return 0;
}
