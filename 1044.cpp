#include <iostream>

using namespace std;

int main()
{
   int a, b, i;
   int mmc, maior;
    cin >> a >> b;
    if(a>b){maior = a;}
    else{maior = b;}
   for(i=2; i<=(a*b); i++)
   {
       if(i%a == 0 && i%b ==0){
        mmc = i;
       break;
       }
   }
   if(mmc == maior){cout <<"Sao Multiplos"<<endl;}
   else{cout<<"Nao sao Multiplos"<<endl;}
    return 0;
}
