#include <iostream>

using namespace std;

int main()
{
    int i, x;
    int count = 0;
    cin >> x;
    while(count <6){
        if(x%2 == 1){
            cout << x << endl;
            count++;
        }
        x++;
    }


    return 0;
}
