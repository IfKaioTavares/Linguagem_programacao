// Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void numeroAleatorio(int *limite){
    srand(time(NULL));

    *limite = rand() % 8;
}

void main(){
    int X,Y;
    int sum;
    int vector[8];
    numeroAleatorio(&X);
    for(int i=0; i<8; i++){
        printf("Informe o número da pos%d: \n",i+1);
        scanf("%d",&vector[i]);
    }
    numeroAleatorio(&Y);
    sum = vector[X] + vector[Y];
    printf("A pos da variavel X eh %d e a pos da variavel Y eh %d logo a soma correspondente com as posicoes do vetor eh:%d", X + 1, Y + 1, sum);
}