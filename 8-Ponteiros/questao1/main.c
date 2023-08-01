//Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.
#include <stdio.h>

void main(){
    int num1 , num2;
    int *pNum1, *pNum2;

    num2 = 40;
    num1 = 30;

    pNum2 = &num2;
    pNum1 = &num1;

    if(pNum1 < pNum2){
        printf("O endereco da variavel pNum1 eh %p", pNum1);
    } else{
        printf("O endereco da variavel pNum2 eh %p", pNum2);
    }
}