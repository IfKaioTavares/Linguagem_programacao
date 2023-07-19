//Crie uma função recursiva que receba um número inteiro N e retorne o somatório dos números de 1 a N.
#include <stdio.h>

int somatorio(int n){
    int sum;
    if(n==1){
        return (1);
    } else{
        sum = n + somatorio(n-1);
    }
    return sum;
}

void main(){
    int n;
    printf("Informe o numero n para fazer o somatorio de 1 a n ");
    scanf("%d", &n);
    printf("O somatorio eh: %d", somatorio(n));
}