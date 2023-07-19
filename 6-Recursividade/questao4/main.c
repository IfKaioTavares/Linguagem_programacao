//Crie uma função recursiva que receba um número inteiro N e imprima todos os números naturais de 0 até N em ordem decrescente.
#include <stdio.h>

void showNumbersInverse(int n){
    if(n >0){
        showNumbersInverse(n-1);
    }
    printf("%d ", n);
}

void main(){
    showNumbersInverse(7);
}