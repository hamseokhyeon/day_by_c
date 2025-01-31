#include <stdio.h>

int main(){
    int N, sum = 0;
    printf("N의 값을 작성해주세요: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        sum += i;
    } printf("1부터 %d까지의 합: %d\n",N, sum);
    return 0;
}