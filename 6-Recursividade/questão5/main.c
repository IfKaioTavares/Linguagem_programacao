//Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.
#include <stdio.h>

int vetorSum(int *vetor, int length){
    if(length==0){
        return 0;
    }else{
       return vetor[length-1] + vetorSum(vetor, length-1);
    }
}  

void main(){
    int vetor[] = {1, 2, 3};
    int length = 3;

    printf("%d", vetorSum(vetor, length));
}