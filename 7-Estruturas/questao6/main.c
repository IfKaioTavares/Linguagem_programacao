//Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas. Agora, escreva um programa que leia os dados de cinco alunos e os armazena nessa estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cinco.
#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[40];
    float nota1, nota2, nota3;
};

void cadastraAluno(struct Aluno aluno[], int qtdAlunos) {
    for (int i = 0; i < qtdAlunos; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &aluno[i].matricula);
        printf("Nome: ");
        scanf("%s", aluno[i].nome);
        printf("Nota 1: ");
        scanf("%f", &aluno[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &aluno[i].nota2);
        printf("Nota 3: ");
        scanf("%f", &aluno[i].nota3);
        printf("\n");
    }
}

void maiorMedia(struct Aluno aluno[], int qtdAlunos) {
    float maiorMedia = 0;
    int indice;
    for (int i = 0; i < qtdAlunos; i++) {
        float media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3;
        if (media > maiorMedia) {
            maiorMedia = media;
            indice = i;
        }
    }

    printf("Aluno com maior media geral:\n");
    printf("Nome: %s\n", aluno[indice].nome);
    printf("Matricula: %d\n", aluno[indice].matricula);
    printf("Notas: %.2f, %.2f, %.2f\n", aluno[indice].nota1,
                                       aluno[indice].nota2,
                                       aluno[indice].nota3);
    printf("Media geral: %.2f\n", maiorMedia);
}

int main() {
    struct Aluno aluno[5];
    cadastraAluno(aluno, 5);
    maiorMedia(aluno, 5);

    return 0;
}
