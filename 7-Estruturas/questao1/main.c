//Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida.
#include <stdio.h>


struct address{
    char city[30];
    char street[30];
    char neighborhood[30];
    int number;

};
struct person{
    char name[10];
    int age;
    struct address address;
};

void main(){
    struct person p1;
    printf("Informe o nome da pessoa: ");
    gets(p1.name);
    printf("Informe a idade da pessoa: ");
    scanf("%d",&p1.age);
    printf("Informe o nome da cidade: ");
    scanf("%s",&p1.address.city);
    printf("Informe o nome da rua: ");
    scanf("%s",&p1.address.street);
    printf("Informe o nome do bairro: ");
    scanf("%s",&p1.address.neighborhood);
    printf("Informe o numero da casa: ");
    scanf("%d",&p1.address.number);
    printf("%s-%d--%s,%s,%s,%d", p1.name, p1.age, p1.address.city, p1.address.street, p1.address.neighborhood, p1.address.number);
}