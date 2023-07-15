//Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais e os escreva na tela.

#include <stdio.h>

void main(){
    int A[] = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7};
    int B[5] = {1};
    for(int i = 0; i <10; i++){
        for(int j = i + 1; j < 10;  j++){
            if(A[i] == A[j]){
                printf("%d\n", A[i]);
            }
        }
    }    
}