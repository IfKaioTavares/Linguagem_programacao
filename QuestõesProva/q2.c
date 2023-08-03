//Defina uma estrutura chamada "Pessoa" com os campos nome, idade e altura. Leia e armazene os dados de cinco pessoas em um vetor e exiba o nome das pessoas da mais alta para a mais baixa.
#include <stdio.h>

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
    int pos[5];
    float alturas[5];
    for (int i = 0; i <5; i++){
        alturas[i] = pessoas[i].altura;
        pos[i] = i;
    }

    printf("Pessoas mais altas para mais baixas:\n");
    for (int i = 0; i <5; i++){
        float maiorAltura = alturas[i];
        int posMaiorAltura = i;
        int valorPos = pos[i];
        for (int j = i; j < 5; j++)
        {
            if(alturas[j] > maiorAltura){
                maiorAltura = alturas[j];
                posMaiorAltura = j;
                valorPos = pos[j];
            }
        }

        alturas[posMaiorAltura] = alturas[i];
        alturas[i] = maiorAltura;
        pos[posMaiorAltura] = pos[i];
        pos[i] = valorPos;        
        printf("%s tem %f metros\n",pessoas[pos[i]].nome, alturas[i]);
    }
}

void main(){
    struct pessoa pessoas[5];
    declaraPessoas(pessoas);
    exibiAltos(pessoas);
}