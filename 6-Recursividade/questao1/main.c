//Escreva uma função recursiva que calcule a soma dos primeiros n cubos: S= 1^3 + 2^3 + n^3

#include <stdio.h>
#include <math.h>

double somatorioDeElevadoA3(int n);

void main(){
    double resul = somatorioDeElevadoA3(4);

    printf("%0.lf", resul);
}


double somatorioDeElevadoA3(int n){
    double sum;
    if(n<=1){
        return(1);
    } else{
        sum = pow(n,3) + somatorioDeElevadoA3(n-1); 
    }

    return sum;
}