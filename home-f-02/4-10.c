#include <stdio.h>

int main(){
    int num = 15;
    int bit = 2;
    int mask = ~(1 << bit);

    num &= mask;
    printf("결과 : %d\n",  num);
    return 0;
}  