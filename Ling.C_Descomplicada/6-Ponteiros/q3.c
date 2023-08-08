//Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array.
#include <stdio.h>

void main(){
    float array[]= {12.33, 77.4, 67.8, 125.7};
    float *p;
    p = array;
    for(int i=0; i< ((int)sizeof(array)/sizeof(float)); i ++ ){
        printf("Endereco %d eh %p\n",i+1, (p+i));
    }
}