#include <iostream>

using namespace std;

int main()
{
    int i;
    double v;
    int count = 0;

    for(i=0; i<6; i++){
        cin >> v;
        if(v >0)
            count++;
    }
    cout << count <<" valores positivos"<< endl;
    return 0;
}
