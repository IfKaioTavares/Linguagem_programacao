//Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Ao final, escreva a matriz obtida na tela.
#include <stdio.h>
#define size 5

void main(){
    int matrix[size][size];

    for(int i = 0; i < size; i ++){
        for(int j = 0; j < size; j++){
            if(i==j){
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < size; i ++){
        for(int j = 0; j < size; j++){
          printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}