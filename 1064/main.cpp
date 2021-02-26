#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i;
    double vpos = 0;
    int count = 0;
    double v;

    for(i=0; i<6; i++){
        cin >> v;
        if(v>0){
            count++;
            vpos += v;
        }
    }
    cout << count << " valores positivos"<<endl;
    cout<<fixed << setprecision(1) <<vpos/count <<endl;
    return 0;
}
