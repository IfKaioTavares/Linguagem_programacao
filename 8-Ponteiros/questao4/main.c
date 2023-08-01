#include <stdio.h>

void main(){
    float matriz[3][3], *pont;
    pont = &matriz[0][0];

    for (int i = 0; i < 6; i++)
    {
        printf("%p\n", pont+i);
    }
    
}