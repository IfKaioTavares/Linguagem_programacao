//Escreva uma função recursiva que receba um valor inteiro e o retorne invertido.
#include <stdio.h>

int inverte(int x){
    if(x==0){
        return x;
    }
    printf("%d", x % 10);
    x = x / 10;
    return inverte(x);
}

void main(){
    inverte(234);
}