#include <stdio.h>

int main(){
  float Celsius, Fahrenheit;
  printf("Informe a temperatura em graus Fahrenheit: ");
  scanf("%f", &Fahrenheit);

  Celsius = ((Fahrenheit - 32) * 5/9);
  printf("%0.2f° Fahrenheit sao %0.2f° Celsius", Fahrenheit, Celsius);
  return 0;
}