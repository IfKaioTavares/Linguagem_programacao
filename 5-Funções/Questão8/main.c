#include <stdio.h>
#include <stdbool.h>


bool quadradoPerfeito(int x){
    if(x < 0 ){
        return false;
    }
    int raiz = 0;
    while(raiz * raiz <= x){
        if(raiz * raiz == x){
            return true;
        }
        raiz++;
    }
    return false;
}


void main(){
    printf("%d",quadradoPerfeito(4));
}