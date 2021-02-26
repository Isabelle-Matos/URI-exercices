#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double m[12][12];
    int i, j;
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
    for(i=1;  i<=10; i++)
    {
        if(i<=5){
        for(j=11; j>11-i; j--)
        {
            soma+=m[i][j];
        }
        }
        else{
        for(j=11; j>i; j--)
        {
            soma+=m[i][j];
        }
        }
    }


    if(t=='S')
    cout <<fixed<<setprecision(1)<<soma << endl;
    else if(t=='M')
        cout <<fixed<<setprecision(1)<<soma/30 << endl;
    return 0;
}

