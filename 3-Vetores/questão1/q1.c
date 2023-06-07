//Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na tela os valores lidos.

#include <stdio.h>

void main(){
    int qtdValores = 6;
    int valores[qtdValores];

    for(int i=0; i<qtdValores; i++){
        printf("Escreva o valor %d: ", i+1);
        scanf("%d",&valores[i]);
    }

    printf("Valores informados: ");
    for(int i=0; i<qtdValores; i++){
        printf("%d ", valores[i]);
    }
    
}