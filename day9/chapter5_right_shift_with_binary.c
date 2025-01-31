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

    printf("오른쪽 시프트 횟수 n을 입력하세요: ");
    scanf("%d", &n);

    printf("입력 값 x (%d)의 2진수:\n", x);
    print_binary(x); // 입력 값의 2진수 출력

    int shifted = x >> n; // 오른쪽 시프트
    printf("\n오른쪽으로 %d번 시프트한 결과 (%d)의 2진수:\n", n, shifted);
    print_binary(shifted); // 시프트 후의 2진수 출력

    printf("\n결과 값: %d\n", shifted);

    return 0;

	/**
	
	8, 2
	1000
	
	=>
	
	 */
}
