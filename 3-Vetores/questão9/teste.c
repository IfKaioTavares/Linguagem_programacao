#include <stdio.h>

int main(){
    int vetor[10] = {9, 5, 7, 1, 2, 8, 4, 0, 3, 6};
    // mostar original
    for (int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    for (int k = 0; k < 10; k++){        
        // encontrar o menor valor e posicao no vetor
        int menorValor = vetor[k];
        int posicaoMenorValor = k;
        for (int i = k; i < 10; i++){
            if (vetor[i] < menorValor){
                menorValor = vetor[i];
                posicaoMenorValor = i;
            }
        }
        //trocar menor valor e colocar na posição 0;
        vetor[posicaoMenorValor] = vetor[k];
        vetor[k] = menorValor;
    }   
    // mostar ordenado
    for (int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}