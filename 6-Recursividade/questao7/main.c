//Escreva uma função recursiva que receba por parâmetro dois valores inteiros x e y e calcule e retorne o resultado de  para o programa principal.
#include <stdio.h>

double elevado(int x, int y){
    if(y==1) return x;
    else return x * elevado(x, y - 1);
}

void main(){
    printf("%0.1lf", elevado(3,4));
}