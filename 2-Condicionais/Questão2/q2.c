#include <stdio.h>

int main(){
  int numero;
  printf("Informe o numero para verificar sua divisao por 4 e 5:");
  scanf("%d", &numero);

  if((numero % 4 ==0) && (numero % 5 == 0)){
    printf("O numero %d eh divisel por 4 e 5", numero);
  } else
  {
    printf("O numero %d nao eh divisel por 4 e 5", numero);
  }

  return 0;
}