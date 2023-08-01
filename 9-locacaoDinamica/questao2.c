//Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas. Escreva um programa que mostre o tamanho em byte dessa estrutura.
#include <stdio.h>
#include <stdlib.h>

struct prova{
    float p1;
    float p2;
    float p3;
};
typedef struct aluno{
    char matricula[20];
    char name[20];
    struct prova *pq;
}aluno;


void main(){
    aluno aluno1;
    printf("Tamnanho da estrutura aluno eh: %d", sizeof(aluno1));
}