//Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a soma dos elementos dessa matriz que estão acima da diagonal principal.
#include <stdio.h>

void main(){
  int matriz[][5] = {
    {0,1,2,3,4},
    {1,0,5,6,7},
    {1,1,0,8,9},
    {1,1,1,0,10},
    {1,1,1,1,0}
  };
  int sum=0;

  for(int i = 0; i <5 ; i++){
    for(int j =0; j < 5; j++){
      if(j>i){
        sum += matriz[i][j];
      }
    }
  }

  printf("%d", sum);
}