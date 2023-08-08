//Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.
#include <stdio.h>

void main(){
    int x1 = 3; int x2 = 5;
    int *p1, *p2;
    p1 = &x2;
    p2 = &x1;

    if(p1>p2){
        printf("O endereço de %d eh: %p ", x2, p1);
    } else{
        printf("O endereço de %d eh: %p ", x1, p2);
    }
}