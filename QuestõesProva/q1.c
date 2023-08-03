//Escreva uma função que receba dois valores inteiros e os inverta entre si usando ponteiros.
#include <stdio.h>

void inverteNumeros(int *n1, int *n2){
    int aux;
    aux = *n2;
    *n1 = *n2;
    *n2=aux;
}

void main(){
    int x = 5;
    int y = 3;
    printf("O valo de x eh %d e o de y eh %d:", x, y);
    inverteNumeros(&x,&y);
    printf("O novo valor de x eh %d e o de y eh %d:", x, y);
}