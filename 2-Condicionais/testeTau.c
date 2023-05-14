#include <stdio.h>

int main(){
  float n1, n2, media, notaRecu;

  printf("Informe a primeira nota: ");
  scanf("%f", &n1);
  printf("Informe a segunda nota: ");
  scanf("%f", &n2);

  media = (n1+n2)/2;

  if(media >=7){
    printf("Aluno aprovado");
  }else if(media>=5){
    printf("Aluno foi para recuperacao\n");
    printf("Informe a nota da recuperacao: ");
    scanf("%f",&notaRecu);
    if(notaRecu >= 7){
      printf("Aprovado na recuperacao");
    } else {
      printf("Reprovado na recupercao");
    }
  } else {
    printf("Reprovado");
  }
  return 0;
}