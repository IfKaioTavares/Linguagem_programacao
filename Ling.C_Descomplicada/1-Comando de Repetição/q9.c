//Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
#include <stdio.h>
void main(){
    int maiorValor=0;
    int menorValor=0;
    int qtd=10;
    for(int i =0; i<qtd; i++){
        int userNumber;
        printf("Informe o numero%d",i+1);
        scanf("%d",&userNumber);
        if(i == 0){
            maiorValor=userNumber;
            menorValor=userNumber;
            continue;
        }
        if(userNumber>maiorValor){
            maiorValor = userNumber;
        }
        if(userNumber<menorValor){
            menorValor = userNumber;
        }
    }

    printf("Maior: %d e Menor: %d", maiorValor, menorValor);
}