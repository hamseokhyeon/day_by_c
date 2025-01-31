#include <stdio.h>
#include <stdlib.h> // 절대값 함수를 위한 헤더

int main() {
    int X, N;
	printf("Enter X and N: "); // X, N 입력��기
    scanf("%d %d", &X, &N);

    if (X == 0) {
        return 0; // X가 0이면 종료
    }

    int absX = abs(X); // 음수 X 처리

    // X의 배수만을 직접 반복 (효율적)
    for (int i = absX; i <= N; i += absX) {
        printf("%d ", i);
    }

    return 0;
}