//Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos desse vetor e imprima o vetor na tela.
#include <stdio.h>

void main(){
  double vetor[] = {7.378945,3.623015,9.894561,12.124597,0.751230,11.978634,2.453627,8.888913,15.235641,6.697815};

  for(int i = 0; i<10; i++){
    double menorValor = vetor[i];
    int pos = i;
    for(int j = i+1; j<10; j++){
      if(vetor[j]<menorValor){
        menorValor = vetor[j];
        pos = j;
      }
    }
    vetor[pos] = vetor[i];
    vetor[i] = menorValor;
    printf("%lf ",vetor[i]);
  }
}