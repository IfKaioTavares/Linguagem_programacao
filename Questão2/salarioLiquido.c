#include <stdio.h>

int main(){
  float HT, VH, PD, SB, TD, SL;
  printf("Informe a quantidade de horas trabalhadas no mes\n");
  scanf("%f", &HT);
  printf("Informe o valor da hora-aula\n");
  scanf("%f", &VH);
  printf("Informe o percentual de desconto do salário bruto\n");
  scanf("%f", &PD);
  SB = HT * VH;
  SL = SB - (SB*(PD/100));
  printf("O valor de seu salario liquido eh de %f", SL);
  return 0;
}