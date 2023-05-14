#include <stdio.h>

int main(){
  int A, B, C, nulo, branco, total, totalValido;
  float perVotoA, perVotoB, perVotoC, perVotoNulo, perVotoBranco, perVotoValido;
  printf("Informe a quantidade de votos do candidato A: ");
  scanf("%d", &A);
  printf("Informe a quantidade de votos do candidato B: ");
  scanf("%d", &B);  
  printf("Informe a quantidade de votos do candidato C: ");
  scanf("%d", &C);
  printf("Informe a quantidade de votos nulos: ");
  scanf("%d", &nulo);
  printf("Informe a quantidade de votos em branco: ");
  scanf("%d", &branco);
  total = A + B + C + nulo + branco;
  totalValido = A + B + C;
  perVotoA = 100 * A/total;
  perVotoB = 100 * B/total;
  perVotoC = 100 * C/total;
  perVotoNulo = 100 * nulo/total;
  perVotoBranco = 100 * branco/total;
  perVotoValido = 100 * totalValido/total;
  
  printf("\n\nN° total de eleitores: %d\nPorcentual de votos validos: %0.1f\nPorcentual de votos validos de A: %0.1f\nPorcentual de votos validos de B: %0.1f\nPorcentual de votos validos de C: %0.1f\nPorcentual de votos nulos: %0.1f\nPorcentual de votos brancos: %0.1f\n",total,perVotoValido,perVotoA,perVotoB,perVotoC,perVotoNulo,perVotoBranco);
  return 0;
}