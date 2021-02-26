#include <iostream>

using namespace std;

int main()
{
    int i, n;
    int soma;

        while(n!=0){
            cin >> n;
            if(n==0){break;}
            soma = 0;
           if(n%2 == 0){soma +=n;}//incrementa n na soma caso ele for par
           else {soma += ++n;}//incrementa +1 no valor, transformando n em par e incrementando dentro de soma
        //o valor de n ja foi transformado para par
           for(i = 0; i<4; i++)
            {
                 n += 2;//pula +2 o n para ir para o proximo par
                soma +=n;//valor soma ja contem o n inserido

            }
    cout << soma << endl;
        }





    return 0;
}
