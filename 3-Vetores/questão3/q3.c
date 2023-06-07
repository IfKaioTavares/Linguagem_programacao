//Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, mostre todos os valores lidos juntamente com a média dos valores.
#include <stdio.h>

void main(){
    int qtdValores = 6;
    int valores[qtdValores];
    int sum = 0; float media = 0;

    for(int i=0; i<qtdValores; i++){
        printf("Escreva o valor %d: ", i+1); scanf("%d",&valores[i]);
        sum += valores[i];
    }
    media = (float) sum/qtdValores;

    printf("Valores informados: ");
    for(int i=0; i<qtdValores; i++){
        printf("%d ", valores[i]);
    }

    printf("A media dos valores eh %0.2f ", media);
    
}