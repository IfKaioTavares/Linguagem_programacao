//Crie uma função recursiva que receba um número inteiro N e imprima todos os números naturais de 0 até N em ordem crescente.
#include <stdio.h>

int showSequence(int n){
    printf("%d ", n);
    if(n == 0){
        return 0;
    } else {
        return showSequence(n-1);
    }
}

void main(){
    showSequence(8);
}