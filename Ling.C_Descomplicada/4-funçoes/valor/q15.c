//Elabore uma função que receba como parâmetro um valor inteiro n e gere comosaída n linhas com pontos de exclamação, conforme o exemplo a seguir, em que usamos n = 5:
#include <stdio.h>

void exclamation(int n){
  for(int i = 1; i<=5;i++){
    for(int j=0; j<i; j++){
      printf("!");
    }
    printf("\n");
  } 
}

void main(){
  exclamation(5);
}