#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int i;
    int x;
    int maior = 0;
    int posicao;

    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] > maior)
            maior = a[i];
    }
    int menor = maior;
    for(i=0; i<n; i++)
    {
     if(a[i] < menor)
     {
            menor = a[i];
            posicao = i;
    }
    }
      cout << "Menor valor: "<< menor <<endl;
      cout <<"Posicao: " << posicao <<endl;
    return 0;
}
