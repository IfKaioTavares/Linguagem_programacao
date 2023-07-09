// Faça um programa que possua um array de nome A que armazene seis números inteiros. O programa deve executar os seguintes passos:
// Atribua os seguintes valores a esse array: 1, 0, 5, −2, −5, 7
// Armazene em uma variável a soma dos valores das posições A[0], A[1] e A[5] do array e mostre na tela essa soma.
// Modifique o array na posição 4, atribuindo a essa posição o valor 100.
// Mostre na tela cada valor do array A, um em cada linha.
#include <stdio.h>

void main(){
    int A[]= {1, 0, 5, -2, -5, 7};
    int sum = A[0] + A[1] + A[5];
    printf("Soma das posições 1, 2 e 6 eh: %d\n", sum);
    A[3] = 100;

    for(int i =0; i<6; ++i){
        printf("%d\n",A[i]);
    }
}