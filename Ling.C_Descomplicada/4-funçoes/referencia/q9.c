//Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas.Agora, escreva uma função que receba um vetor de tamanho N dessa estrutura. Essa função deve retornar o índice do aluno que possui a maior média geral entre todos os alunos.
#include <stdio.h>

typedef struct aluno{
  char matricula[10];
  char nome[20];
  int notas[3];
} alun;

void declaraAlunos(alun *alunos, int N){
  for(int i = 0; i < N; i++){
    printf("Aluno %d:\n", i + 1);
    printf("Matricula: ");
    fgets(alunos[i].matricula, sizeof(alunos[i].matricula), stdin);
    printf("Nome: ");
    fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
    printf("Notas: ");
    scanf("%d", &alunos[i].notas[0]);
    scanf("%d", &alunos[i].notas[1]);
    scanf("%d", &alunos[i].notas[2]);
    getchar(); // Limpa o caractere de nova linha deixado pelo scanf
  }
}

int indiceMaiorMedia(alun *alunos, int N) {
  int indiceMaior = 0;
  float maiorMedia = 0;

  for (int i = 0; i < N; i++) {
    float media = 0;
    for (int j = 0; j < 3; j++) {
      media += alunos[i].notas[j];
    }
    media /= 3.0;

    if (media > maiorMedia) {
      maiorMedia = media;
      indiceMaior = i;
    }
  }

  return indiceMaior;
}

int main() {
  int N;
  printf("Digite a quantidade de alunos: ");
  scanf("%d", &N);
  getchar(); // Limpa o caractere de nova linha deixado pelo scanf

  alun alunos[N];

  declaraAlunos(alunos, N);

  int indiceMaior = indiceMaiorMedia(alunos, N);

  printf("\nAluno com maior media:\n");
  printf("Matricula: %s", alunos[indiceMaior].matricula);
  printf("Nome: %s", alunos[indiceMaior].nome);
  printf("Notas: %d %d %d\n", alunos[indiceMaior].notas[0], alunos[indiceMaior].notas[1], alunos[indiceMaior].notas[2]);

  return 0;
}
