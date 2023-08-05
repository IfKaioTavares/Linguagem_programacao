//Defina uma estrutura chamada "Pessoa" com os campos nome, idade e altura. Leia e armazene os dados de cinco pessoas em um vetor e exiba o nome das pessoas da mais alta para a mais baixa.
#include <stdio.h>
#include <string.h>

struct pessoa{
    char nome[20];
    int idade;
    float altura;
};

void declaraPessoas(struct pessoa *pessoas){
    for(int i = 0; i < 5; i++){
        printf("Pessoa%d\n", i + 1);
        printf("Informe o nome da pessoa: ");
        scanf("%s", pessoas[i].nome);
        printf("Informe a idade da pessoa: ");
        scanf("%d", &pessoas[i].idade);
        printf("Informe a altura da pessoa: ");
        scanf("%f", &pessoas[i].altura);
    }
}

void exibiAltos(struct pessoa *pessoas){
  for (int i = 0; i < 5; i++){
    for(int j = i + 1; j < 5; j++){
      if(pessoas[j].altura> pessoas[i].altura){
          struct pessoa aux;
          aux.altura = pessoas[j].altura;
          aux.idade = pessoas[j].idade;
          strcpy(aux.nome, pessoas[j].nome);

          pessoas[j].altura = pessoas[i].altura;
          pessoas[j].idade = pessoas[i].idade;
          strcpy(pessoas[j].nome, pessoas[i].nome);

          pessoas[i].altura = aux.altura;
          pessoas[i].idade = aux.idade;
          strcpy(pessoas[i].nome, aux.nome);
        }
      }
    printf("%s\n", pessoas[i].nome);
  }
  
}

void main(){
    struct pessoa pessoas[5];
    declaraPessoas(pessoas);
    exibiAltos(pessoas);
}