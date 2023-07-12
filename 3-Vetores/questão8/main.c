//Faça um programa que preencha um vetor com 10 números reais. Em seguida, calcule e mostre na tela a quantidade de números negativos e a soma dos números positivos desse vetor.

#include <stdio.h>

void main(){
    int vetor[10];
    int qtdvalorNegativo;
    int ValorPositivo;

    for(int i = 0; i<10; i++){
        printf("Informe o valo da pos %d\n", (i + 1));
        scanf("%d", &vetor[i]);       
    }

    qtdvalorNegativo = 0;
    ValorPositivo = 0;
    for(int i = 0; i < 10; i ++){
        if(vetor[i] < 0){
            qtdvalorNegativo++;
        }else if(vetor[i] >= 0){
            ValorPositivo+=vetor[i];
        }
    }

    printf("Qtd de valores negativos: %d e Soma dos valores positivos: %d", qtdvalorNegativo, ValorPositivo);
}