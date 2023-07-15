//Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos desse vetor e imprima o vetor na tela.

#include <stdio.h>

void main(){
    int vetor[10] = {5, 9, 4, 10, 7, 8, 7, 2, 4, 3};
    int lowerValue = 0;
    int lowerValuePosition = 0;

    for (int i = 0; i < 10; i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");

    for(int i = 0; i <10; i ++){
        lowerValue = vetor[i];
        lowerValuePosition = i;
        for(int j = i; j < 10; j++){
            if(vetor[j] < lowerValue){
                lowerValue = vetor[j];
                lowerValuePosition = j;
            }
        }
        vetor[lowerValuePosition] = vetor[i];
        vetor[i] = lowerValue; 
    }

    for (int i = 0; i < 10; i++){
        printf("%d ",vetor[i]);
    }

}