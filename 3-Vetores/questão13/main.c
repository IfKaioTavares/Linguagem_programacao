//Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, caso o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir a ele para digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.
#include <stdio.h>
#include<stdlib.h>

void main(){

    int vetor[10];
    for(int i = 0; i<10; i++){
        printf("Informe o valor da pos%d: \n", i +1);
        scanf("%d",&vetor[i]);
        for(int j = 0; j < i; j++){
            while(vetor[i] == vetor[j]){
                printf("Numero ja digitado\n");
                scanf("%d", &vetor[i]);
            }
        }
    }
    system("cls");
    for(int i=0; i < 10; i ++){
        printf("%d ", vetor[i]);
    }
}