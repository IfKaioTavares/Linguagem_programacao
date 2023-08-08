//Faça um programa que leia um número inteiro N e depois imprima os N primei-ros números naturais ímpares.
#include <stdio.h>

void main(){
    int N = 5;
    int stop = 0;
    for(int i=1;;i+=2){
        if(stop<N){
            printf("%d\n",i);
            stop++;
        } else{
            break;
        }
    }
}