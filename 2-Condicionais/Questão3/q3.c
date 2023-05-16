#include <stdio.h>

int main(){
  int n1, n2, diferenca;
  printf("Informe o valor de n1: ");
  scanf("%d", &n1);
  printf("Informe o valor de n2: ");
  scanf("%d", &n2);
  if(n1 > n2){
    diferenca = n1 - n2;
    printf("A diferenca de %d e %d eh: %d", n1, n2, diferenca);
  } else if(n2 > n1){
    printf("A diferenca de %d e %d eh: %d", n2, n1, diferenca);
  } else {
    printf("Os numeros sao iguais");
  }
  
  return 0;
}