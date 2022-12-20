#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
   int cod, qtd;
   double preco;
   cin >> cod;

   if(cod == 1){preco = 4.00;}
   else if(cod == 2){preco = 4.50;}
   else if(cod == 3){preco = 5.00;}
   else if(cod == 4){preco = 2.00;}
   else if(cod == 5){preco = 1.50;}

   cin >> qtd;
   cout << "Total: R$ " <<fixed << setprecision(2) << preco*qtd << endl;
    return 0;
}
