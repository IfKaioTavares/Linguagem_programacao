#include <stdio.h>
#include <math.h>

int main(){
  float pi = 3.14159;
  float raio, area;
  printf("Digite o raio da circunferencia\n");
  scanf("%f", &raio);
  area = pi * pow(raio,2);
  printf("A area da circuferncia vai ser de %0.3f", area);
  return 0;
}