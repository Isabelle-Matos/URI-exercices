#include <iostream>

using namespace std;

int main()
{
    int n;
    int m[70][70];
    int i, j;
    while(cin >>n)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
               if(i==j)
                m[i][j] = 1;
               else if(i+j==n-1)
                m[i][j] = 2;
               else
                m[i][j] = 3;
            }
        }
        for(i =0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cout << m[i][j];
            }
            cout << endl;
        }


    }


    return 0;
}
