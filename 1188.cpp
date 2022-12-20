#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double m[12][12];
    int i, j, n;
    char t;
    cin >> n;
    cin >> t;
    double soma1=0, soma2=0, soma3=0;

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            cin >> m[i][j];
        }
    }
    for(i=11;  i>6; i--)
    {
        for(j=i-1; j>5; j--)
        {
            soma1+=m[i][j];
        }
        for(j=12-i; j<6; j++)
        {
            soma2+=m[i][j];
        }
        soma3 = soma1 + soma2;
    }


    if(t=='S')
    cout <<fixed<<setprecision(1)<<soma3 << endl;
    else if(t=='M')
        cout <<fixed<<setprecision(1)<<soma3/30 << endl;
    return 0;
}
