//Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela quantos valores pares foram armazenados nesse vetor.

#include <stdio.h>

void scanVectot(int A[], int length){
    for(int i =0; i<length; i++){
        printf("Informe o numero da pos%d: \n", i+1);
        scanf("%d", &A[i]);
    }
}

void main(){
    int arrayLenght = 10;
    int A[arrayLenght];
    scanVectot(A, arrayLenght);
    printf("%d", A[4]);
}