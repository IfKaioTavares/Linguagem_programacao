//Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
#include <stdio.h>
#include <math.h>

double ncubos(int n){
  double sum;
  if(n<=1){
    return 1;
  } else{
    sum = pow(n,3) + ncubos(n-1);
  }
  return sum;
}

void main(){
  double x = ncubos(3);

  printf("%0.1lf", x);
}