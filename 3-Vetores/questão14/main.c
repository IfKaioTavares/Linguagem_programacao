#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(){
    int vetor[] = {1, 2, 3, 4, 5, 6,  7, 8, 9, 10};
    int average = 0;
    int sumOfDeviation = 0;
    double standardDeviation;
    for (int i =0; i <10; i++){
        average += vetor[i];
    }

    for(int i = 0; i < 10; i++){
        sumOfDeviation += pow((vetor[i] - average), 2);
    }

    standardDeviation = sqrt((sumOfDeviation)/9);
    printf("%lf", standardDeviation);
}