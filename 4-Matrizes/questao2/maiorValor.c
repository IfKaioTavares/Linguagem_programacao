//Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o maior valor contido nessa matriz e a sua localização (linha e coluna).
#include <stdio.h>
#define size 4

void main(){
    int matriz[size][size] ={
        {2,8,3},
        {2,9,6},
        {7,34,9},
        {35, 2, 8}
    };
    int minValue = matriz[0][0];
    int rowPos = 0; 
    int columPos = 0;

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(minValue < matriz[i][j]){
                minValue = matriz[i][j];
                rowPos = i; 
                columPos =j;
                printf("%d\n", minValue);
                printf("i:%d e j:%d\n", rowPos, columPos);
            }
        }
    }

    printf("%d", minValue);
}