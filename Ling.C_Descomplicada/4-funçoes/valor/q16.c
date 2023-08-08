//Elabore uma função que receba como parâmetro um valor inteiro n e gere como saída um triângulo lateral formado por asteriscos conforme o exemplo a seguir,em que usamos n = 4:
#include <stdio.h>
void firstStep(int n){
  for(int i = 1; i<=n;i++){
    for(int j=0; j<i; j++){
      printf("*");
    }
    printf("\n");
  } 
}

void secondStep(int n){
  for(int i = n-1; i>0;i--){
    for(int j=0; j<i; j++){
      printf("*");
    }
    printf("\n");
  } 
}

void triangulo(int n){
  firstStep(n);
  secondStep(n);
}

void main(){
  triangulo(5);
}