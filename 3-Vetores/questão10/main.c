//Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.

#include <stdio.h>

void main(){
    int array[100];

    for(int i = 0; i <100; i++){
        array[i] = i * 7;
        printf("%d\n", array[i]);
    }
}