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
    double soma=0, media=0;

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            cin >> m[i][j];
        }
    }
    for(i=0;  i<12; i++)
    {
        j=n;
            if(t=='S')
            {
                soma+=m[i][j];
            }
            else if (t=='M')
            {
                media+=m[i][j];
            }
    }

    if(t=='S')
    cout <<fixed<<setprecision(1)<<soma << endl;
    else if(t=='M')
        cout <<fixed<<setprecision(1)<<media/12 << endl;
    return 0;
}
