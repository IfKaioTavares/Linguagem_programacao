#include <stdio.h>
#include <math.h>

struct coordinates{
    int x;
    int y;
}; 

double distanceTwoPoints(struct coordinates c1, struct coordinates c2){
    return sqrt(pow((c1.x - c2.x), 2) + pow((c1.y - c2.y), 2));
}

void main(){
    struct coordinates c1;
    c1.x = 0; c1.y = 0;
    struct coordinates c2;
    c2.x = 4; c2.y = 3;
    printf("%0.1lf", distanceTwoPoints(c1, c2));
}