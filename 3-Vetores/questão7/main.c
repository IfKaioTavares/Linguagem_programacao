//Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão ser impressos o maior e o menor elemento desse vetor.

#include <stdio.h>

void main(){
    int vetor[10];
    int maiorValor;
    int menorValor;

    for(int i = 0; i<10; i++){
        printf("Informe o valo da pos %d\n", (i + 1));
        scanf("%d", &vetor[i]);       
    }

    maiorValor = vetor[0];
    menorValor = vetor[0];
    for(int i = 0; i < 10; i ++){
        if(vetor[i] > maiorValor){
            maiorValor = vetor[i];
        }else if(vetor[i] < menorValor){
            menorValor = vetor[i];
        }
    }

    printf("Maio valor: %d e Menor valor: %d", maiorValor, menorValor);
}