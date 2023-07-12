//Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor armazenando esse resultado em outro vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números

#include <stdio.h>
#include <math.h>

void main(){
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10 ,11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int B[20];

    for(int i = 0; i < 20; i++){
        B[i] =  pow(A[i],2);
        printf(" %d ", B[i]);
    }

}