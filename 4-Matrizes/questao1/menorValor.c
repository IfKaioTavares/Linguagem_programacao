//Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o menor valor contido nessa matriz.

#include <stdio.h>
#define size 3

void main(){
    int matriz[size][size] ={
        {34,8,3},
        {2,5,6},
        {7,1,9}
    };
    int minValue = matriz[0][0];

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(minValue > matriz[i][j]){
                minValue = matriz[i][j];
                printf("%d\n", minValue);
            }
        }
    }

    printf("%d", minValue);
}