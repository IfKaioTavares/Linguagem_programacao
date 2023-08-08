//Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.
#include <stdio.h>

void main(){
    int N = 100;
    for(int i = N; i >=0; i--){
        printf("%d\n", i);
    }
}