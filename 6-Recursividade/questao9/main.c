//Escreva uma função recursiva que receba um número inteiro positivo. Calcule e retorne o seu fatorial n!:
#include <stdio.h>

double factorial(int x){
    if(x == 1) return 1;
    else return x * factorial(x - 1);
}

void main(){
    printf("%0.2lf", factorial(7));
}