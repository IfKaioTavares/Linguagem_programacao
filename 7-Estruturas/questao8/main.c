//Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba os nomes da pessoa mais nova e da mais velha.
#include <stdio.h>

typedef struct date{
    int day;
    int month;
    int year;
}date;



typedef struct person{
    char name[20];
    date date;
}ps;

void createData(ps *person){
    scanf("%d", &person->date.day);
    scanf("%d", &person->date.month);
    scanf("%d", &person->date.year);
}


void main(){
    ps person[6];
    for(int i=0; i <6; i++){
        scanf("%s", person[i].name);
        createData(&person[i]);
    }

    printf("%s", person[2].name);
}