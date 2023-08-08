//Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.
#include <stdio.h>

void main(){
    int num = 3;
    int qtd = 5;
    for(int i = 1; i<= qtd; i++){
        printf("%d\n", num * i);
    }
}