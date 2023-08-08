//Crie um programa que contenha um array de inteiros contendo cinco elementos. Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
#include <stdio.h>

void main(){
    int array[5] = {1, 2, 3, 4, 5}, *p;
    for(p=array; p< array + 5; p++){
        printf("%d\n", *p * 2);
    }
}