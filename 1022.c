#include <stdio.h>

void soma(int num1, int den1, int num2, int den2, int *numerador, int *denominador){
    *numerador = (num1*den2)+(num2*den1);
    *denominador = (den1*den2);
}

void subtracao(int num1, int den1, int num2, int den2, int *numerador, int *denominador){
    *numerador = (num1*den2) - (num2*den1);
    *denominador = (den1*den2);
}

void multiplicacao(int num1, int den1, int num2, int den2, int *numerador, int *denominador){
    *numerador = (num1*num2);
    *denominador = (den1*den2);
}

void divisao(int num1, int den1, int num2, int den2, int *numerador, int *denominador){
    *numerador = (num1*den2);
    *denominador = (num2*den1);
}

int mdc(int numerador, int denominador){

    int resto = numerador % denominador;

	while (resto != 0)
	{

		numerador = denominador;
		denominador = resto;
		resto = numerador % denominador;

	}

	return denominador;

}

int main(){

    int qtd, num1, den1, num2, den2, numerador, denominador, resp;
    char caract1;
    scanf("%d", &qtd);

    for(int i=0; i<qtd; i++){

        scanf("%d / %d %c %d / %d", &num1, &den1, &caract1, &num2, &den2);
        if(caract1 == '+'){
            soma(num1, den1, num2, den2, &numerador, &denominador);
        }
        else if(caract1 == '-'){
            subtracao(num1, den1, num2, den2, &numerador, &denominador);
        }
        else if(caract1 == '*'){
            multiplicacao(num1, den1, num2, den2, &numerador, &denominador);
        }
        else if(caract1 == '/'){
            divisao(num1, den1, num2, den2, &numerador, &denominador);
        }

        resp = mdc(numerador, denominador);
        if(resp > 0){
             printf("%d/%d = %d/%d\n", numerador, denominador, (numerador/ resp), (denominador/ resp));
         }
        else {
            printf("%d/%d = %d/%d\n", numerador, denominador, -(numerador/ resp), -(denominador/ resp));
        }

    }




    return 0;
}