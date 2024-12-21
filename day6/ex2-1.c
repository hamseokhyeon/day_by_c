#include <stdio.h>

int main(){
    int n, sum =0;
	printf("양의 정수 n을 입력하세요 :");
    scanf("%d", &n);

	// 1 + 2 + 3 + 4 + 5 = 15; 반복.

    for (int i=1; i<=n; i++) {
         누적 합 계산
    }sum += i; //

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

    return 0;

}