#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double m[12][12];
    int i, j, p=0;
    char t;
    cin >> t;
    double soma=0;

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            cin >> m[i][j];
        }
    }
    for(i=1;  i<12; i++)
    {
        for(j=0; j<=p; j++)
            soma+=m[i][j];
            p++;
    }

    if(t=='S')
    cout <<fixed<<setprecision(1)<<soma << endl;
    else if(t=='M')
        cout <<fixed<<setprecision(1)<<soma/66.0 << endl;
    return 0;
}
