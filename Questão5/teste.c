#include <stdio.h>
# include <math.h>
int main(){
  float raio, altura, pi, volume;
  pi = 3.14;
  printf("Informe o raio da lata: ");
  scanf("%f",&raio);
  printf("Informe a altura da lata: ");
  scanf("%f",&altura);

  volume = pi * pow(raio, 2) * altura;

  printf("O volume da lata de oleo é de %0.2f cm2", volume);

  return 0;
}