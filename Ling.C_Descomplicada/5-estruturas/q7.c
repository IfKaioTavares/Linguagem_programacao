//Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco atletas. Calcule e exiba os nomes por ordem de idade, do mais velho para o mais novo.

#include <stdio.h>
#include <string.h>

struct atleta{
    char name[20];
    char esporte[20];
    int idade;
    float altura;
};

void cadastraAtleta(struct atleta *atletas){
    for(int i = 0; i < 5; i++){
        printf("Atleta%d\n", i + 1);
        printf("Nome: ");
        scanf("%s", atletas[i].name);
        printf("Esporte: ");
        scanf("%s", atletas[i].esporte);
        printf("Idade: ");
        scanf("%d", &atletas[i].idade);
        printf("Altura: ");
        scanf("%f", &atletas[i].altura);
    }
}

void maisVelhos(struct atleta *atletas){
    for(int i = 0; i <5; i++){
        for (int j = i + 1; j < 5; j++){
            if(atletas[j].idade > atletas[i].idade){
                struct atleta aux;
                strcpy(aux.name, atletas[j].name);
                strcpy(aux.esporte, atletas[j].esporte);
                aux.idade = atletas[j].idade;
                aux.altura = atletas[j].altura;

                strcpy(atletas[j].name, atletas[i].name);
                strcpy(atletas[j].esporte, atletas[i].esporte);
                atletas[j].idade = atletas[i].idade;
                atletas[j].altura = atletas[i].altura;
                
                strcpy(atletas[i].name, aux.name);
                strcpy(atletas[i].esporte, aux.esporte);
                atletas[i].idade = aux.idade;
                atletas[i].altura = aux.altura;
            }
        }
        printf("%s\n", atletas[i].name);
    }
}


void main(){
    struct atleta listaAtletas[5];
    cadastraAtleta(listaAtletas);
    maisVelhos(listaAtletas);
}