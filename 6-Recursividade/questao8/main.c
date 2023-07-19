//A multiplicação de dois números inteiros pode ser feita através de somas sucessivas (por exemplo, 2 * 3 = 2 + 2 + 2). Crie uma função recursiva que calcule a multiplicação por somas sucessivas de dois inteiros.
# include <stdio.h>
int mpy (int x, int y){
    if(y == 1) return x;
    else return x + mpy(x, y-1);
}

void main(){
    printf("%d", mpy(7,8));
}