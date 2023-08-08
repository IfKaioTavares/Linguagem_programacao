//Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.
#include <stdio.h>

int vetorSum(int vetor[], int tam){
  if(tam<0){
    return 0;
  }else{
    return (vetor[tam-1] + vetorSum(vetor, tam - 1));
  }
}


void main(){
  int vetor[] = {1, 2, 3 ,4 ,5 ,6 ,7 ,8 ,9};
  printf("%d", vetorSum(vetor, 9));
}