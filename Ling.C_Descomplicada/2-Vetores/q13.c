//Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, caso o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir a ele para digitar outro número. Note que cada valordigitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.
#include <stdio.h>

void main(){
  int numbers[10];
  for(int i = 0; i <10; i++){
    int validation;
    int newNumber;
    do{
      validation = 0;
      printf("Informe o numero%d: ",i+1);
      scanf("%d", &newNumber);
      for(int j = 0; j<i; j++){
        if(newNumber==numbers[j]){
          printf("Numero ja informado, informe outro\n");
          validation = 1;
        }
      }
    }while(validation);
    numbers[i] = newNumber;
  }
}