//Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade e o endereço de uma pessoa. Agora, escreva uma função que receba um inteiro positivo N e retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente, dessa estrutura. Solicite também que o usuário digite os dados desse vetor dentro da função.

#include <stdio.h>
#include <stdlib.h>

typedef struct regisster{
    char name[50];
    int age;
    char addres[100];
}regis;

regis* registerList(int N){
    regis *lista = (struct regisster*)malloc(N * sizeof(regis));


    if(lista == NULL){
        printf("Erro de memoria!\n");
        exit(1);
    }
    regis *list = lista;
    for(int i= 0; i < N; i++){
        printf("Pessoa %d: ",i+1);
        printf("Digite o nome: ");
        scanf(" %[^\n]", list->name);
        printf("Digite a idade: ");
        scanf("%d", &list->age);
        printf("Digite o endereco: ");
        scanf(" %[^\n]", list->addres);

        list++;
    }

    return lista;
}

void main(){
    int N;
    printf("Informe a qtd de pessoas a ser cadastrada: ");
    scanf("%d",&N);

    regis *list = registerList(N);

     printf("\nDados do vetor de Cadastro:\n");
    for (int i = 0; i < N; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", list[i].name);
        printf("Idade: %d\n", list[i].age);
        printf("Endereco: %s\n\n", list[i].addres);
    }
}