//Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. Em seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior nota foi na prova 3.
#include <stdio.h>

void main(){
  int notas [][3] = {
    {6, 4, 2},
    {3, 9, 10},
    {7, 8, 3},
    {5, 5, 8},
    {4, 8, 6},
    {2, 0, 1},
    {10, 0, 7},
    {4, 6, 4},
    {10, 9, 8},
    {10, 7, 7}
  };
  
  for(int i = 0; i<10; i++){
    for(int j = 0; j<3; j++){
      printf("%d ", notas[i][j]);
    }
    printf("\n");
  }

  int badGrades[3] = {0};

  for(int i=0; i<10; i++){
    for(int j=0; j<3; j++){
      if(notas[i][j]<=5){
        switch (j){
        case 0:
          badGrades[0]++;
          break;
        case 1:
          badGrades[1]++;
          break;
        case 2:
          badGrades[2]++;
        default:
          break;
        }
      }
    }
  }

  for(int i = 0; i <3; i++){
    printf("%d\n", badGrades[i]);
  }
  
}