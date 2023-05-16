#include <stdio.h>

int main(){
  int lado1, lado2, lado3;
  printf("Informe o valor do lado 1: ");
  scanf("%d", &lado1);
  printf("Informe o valor do lado 2: ");
  scanf("%d", &lado2);
  printf("Informe o valor do lado 3: ");
  scanf("%d", &lado3);

  if((lado1<(lado2 + lado3)) && (lado2<(lado1 + lado3)) && (lado3<(lado1 + lado2))){
    if(lado1==lado2 && lado2==lado3 && lado3==lado1){
      printf("O triangulo eh equilatero");
    } else if (lado1==lado2 || lado1==lado3 || lado2==lado3){
      printf("O triangulo eh isosceles");
    } else{
      printf("O triangulo eh escaleno");
    }
  }else{
    printf("Os lados informados nao formam um trinagulo");
  }
  return 0;
}