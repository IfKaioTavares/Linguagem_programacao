//Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
#include <stdio.h>
void main(){
    int qtd =50;
    int conditional = 0;
    for(int i = 0; ;i+=2){
        if(conditional<50){
            printf("%d\n", i);
            conditional++;
        }else{
            break;
        }
    }
}