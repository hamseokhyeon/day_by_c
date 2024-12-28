#include <stdio.h>

int main(){
    int x;
    printf("정수x를 입력하세요: ");
    scanf("%d", &x);

    printf("짝수가 아닌가: %d\n", !(x % 2 == 0));
    printf("0이 아닌가: %d\n",  !(x == 0));

    return 0;

}