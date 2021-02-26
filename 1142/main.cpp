#include <iostream>

using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    for(i=0; i<n; i++){
        for(j=1; j<=3; j++){
            cout<< i*4+j << " ";
        }
        cout << "PUM" <<endl;
    }
    return 0;
}
