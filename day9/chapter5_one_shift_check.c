#include <stdio.h>

// 10진수를 2진수 문자열로 변환하는 함수
void print_binary(int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0) printf(" "); // 가독성을 위해 4비트씩 띄움
    }
    printf("\n");
}

int main() {
    int n;

    printf("비트 위치 n을 입력하세요 (0부터 시작): ");
    scanf("%d", &n);

    int result = 1 << n; // 1을 n번 왼쪽으로 시프트

    printf("1 << %d의 결과 값: %d\n", n, result);
    printf("2진수 표현:\n");
    print_binary(result); // 결과의 2진수 출력

    return 0;
}
