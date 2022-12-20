#include <iostream>

using namespace std;

int main()
{
    int n;
    int i = 1;
    cin >> n;

    while(i<10000){
        if(i%n == 2){cout << i << endl;}
        i++;
    }
    return 0;
}
