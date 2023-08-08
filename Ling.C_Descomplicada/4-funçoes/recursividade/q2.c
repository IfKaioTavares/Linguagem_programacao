//Crie uma função recursiva que receba um número inteiro N e retorne o somatório dos números de 1 a N.
#include <stdio.h>

int somatorio(int n){
  if(n==1){
    return 1;
  } else{
    return (n + somatorio(n-1));
  }
}

void main(){
  printf("%d", somatorio(5));
}