//Escreva um programa que mostre o tamanho em byte que cada tipo de dados ocupa na memória: char, int, float, double.
#include <stdio.h>
#include <stdlib.h>

void main(){
    printf("O tamanho de um char eh:%d\n ", sizeof(char));
    printf("O tamanho de um int eh:%d\n ", sizeof(int));
    printf("O tamanho de um float eh:%d\n ", sizeof(float));
    printf("O tamanho de um double eh:%d\n ", sizeof(double));
}