//Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco posições dessa estrutura e imprima a maior hora.
#include <stdio.h>
#include <stdlib.h>
#define tam 5

struct Time{
    int hour;
    int minute;
    int second;
};

void createTimes(struct Time *times){
    for(int i = 0; i < tam; i++){
        printf("Tempo %d\n", i + 1);
        printf("Hora %d: ", i + 1);
        scanf("%d",&times[i].hour);
        printf("Minuto %d: ", i + 1);
        scanf("%d",&times[i].minute);
        printf("Segundos %d: ", i + 1);
        scanf("%d",&times[i].second);
        system("cls");
    }
}

void biggestTime(struct Time *times){
    int position = 0;
    int biggestHour, biggestMinute, biggestSecond;
    biggestHour = times[position].hour;
    for(int i = 1; i < tam; i++){
        if(times[i].hour > times[position].hour){
            position = i;
        } else if (times[i].hour ==times[position].hour){
            if(times[i].minute > times[position].minute){
                position = i;
            } else if(times[i].minute == times[position].minute){
                if(times[i].second > times[position].second){
                    position = i;
                }
            }
        }
    }
    printf("%d", position);
}

void main(){
    struct Time times[tam];
    createTimes(times);
    biggestTime(times);
}