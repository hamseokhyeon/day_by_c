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
    int x, n;

    printf("정수 x를 입력하세요: ");
    scanf("%d", &x);

    printf("왼쪽 시프트 횟수 n을 입력하세요: ");
    scanf("%d", &n);

    printf("입력 값 x (%d)의 2진수:\n", x);
    print_binary(x); // 입력 값의 2진수 출력

    int shifted = x << n; // 왼쪽 시프트
    printf("\n왼쪽으로 %d번 시프트한 결과 (%d)의 2진수:\n", n, shifted);
    print_binary(shifted); // 시프트 후의 2진수 출력

    printf("\n결과 값: %d\n", shifted);

    return 0;

    /**
    
     8 
     2*2 = 4
     8*4 = 32;

    입력 값 x (8)의 2진수:
    0000 0000 0000 0000 0000 0000 0000 1000

    왼쪽으로 2번 시프트한 결과 (32)의 2진수:
    0000 0000 0000 0000 0000 0000 0010 0000


     */

 
