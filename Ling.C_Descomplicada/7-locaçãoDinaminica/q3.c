//Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade e o endereço de uma pessoa. Agora, escreva uma função que receba um inteiro positivo N e retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente, dessa estrutura. Solicite também que o usuário digite os dados desse vetor dentro da função.
#include <stdio.h>
#include <stdlib.h>

struct cadastro{
    char name[20];
    int idade;
    char endero[20];
};

struct cadastro* listaCadastro(int N){
    struct cadastro *p = (struct cadastro *)malloc(N * sizeof(struct cadastro));
    if(p==NULL){
        printf("Fatal Error");
        exit(1);
    }
    for(struct cadastro* l = p; l< p + N; l++){
        printf("Digite o nome: ");
        scanf(" %[^\n]", l->name);
        printf("Digite a idade: ");
        scanf("%d", &l->idade);
        printf("Digite o endereco: ");
        scanf(" %[^\n]", l->endero);
    }

    return p;
}

void main(){
    int N;
    printf("Informe a qtd de pessoas a ser cadastrada: ");
    scanf("%d",&N);

    struct cadastro *list = listaCadastro(N);

    printf("\nDados do vetor de Cadastro:\n");
    for (int i = 0; i < N; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", list[i].name);
        printf("Idade: %d\n", list[i].idade);
        printf("Endereco: %s\n\n", list[i].endero);
    }
}