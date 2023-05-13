#include <stdio.h>
#include <math.h>
#include <stdio.h>

int main(){
  float a, b, c, resul;
  printf("Informe o valor de a: ");
  scanf("%f", &a);
  printf("Informe o valor de b: ");
  scanf("%f", &b);
  printf("Informe o valor de c: ");
  scanf("%f", &c);

  resul = pow(a,2) + pow(b,2) + pow(c, 2);

  printf("O resultado da soma dos quadrados dos tres valores eh: %f", resul);

  return 0;
}