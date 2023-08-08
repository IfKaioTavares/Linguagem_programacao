//Crie uma função recursiva que receba um número inteiro N e imprima todos os números naturais de 0 até N em ordem crescente.
#include <stdio.h>

int showSequenceNumbers(int n){
  if(n<0){
    return 0;
  } else{
    showSequenceNumbers(n-1);
  }
  printf("%d ", n);
}

void main(){
  showSequenceNumbers(8);
}