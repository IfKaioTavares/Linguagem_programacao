/*Defina uma estrutura chamada "Data" com os campos dia, mês e ano, crie uma função que receba uma variável dessa estrutura representando uma data e verifique se a data é válida.
Uma data é válida se:
O mês está entre 1 e 12.
O ano é um número positivo.
O dia está dentro do intervalo válido para o mês (31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31)*/
#include <stdio.h>

struct data{
    int dia;
    int mes;
    int ano;
};

int verificaData(int dia, int mes, int ano){
    int validation;
    int diaMesValido[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(ano > 0){
        validation = 1;
    }else validation = 0;

    if(mes>=1 || mes<=12) validation = 1; else validation = 0;

    if(dia <= diaMesValido[mes -1]) validation = 1; else validation = 0;

    return validation;
}


void main(){
    struct data newData;
    newData.ano = 2002;
    newData.mes = 2;
    newData.dia = 28;
    if(verificaData(newData.dia, newData.mes, newData.ano)){
        printf("Data Valida");
    } else {
        printf("Data invalida");
    }
}