#include <stdio.h>

void main(){
    float array[10], *pont;
    pont = array;

    for(int i=0; i < 10; i++){
        printf("%p\n", pont+i);
    }
    printf("\n");
    for(int i=0; i < 10; i++){
        printf("%p\n", &array[i]);
    }
}