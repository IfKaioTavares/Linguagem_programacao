//Escreva uma função recursiva que receba um número inteiro, maior ou igual a zero, e retorne o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.
#include <stdio.h>

int fibonacci(int x){
    if(x==1) return 1;
    else if(x==2) return 2;
    else return fibonacci(x-1) + fibonacci(x-2);
}

void main(){
    printf("%d", fibonacci(10));
}