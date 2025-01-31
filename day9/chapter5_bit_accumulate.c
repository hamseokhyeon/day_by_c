#include <stdio.h>

// 10진수를 2진수 문자열로 변환하는 함수
void print_binary(int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0) printf(" "); // 가독성을 위해 4비트씩 띄움
    }
    printf("\n");
}

int main(){
    int max_bit, sum = 0;

    printf("최대 비트 위치를 입력하세요: ");
    scanf("%d", &max_bit);

    for (int i = 0; i <= max_bit; i++) {
        sum+= 1 << i;
        printf("1 << %d의 값 (%d)의 2진수: ", i, 1 <<i);
        print_binary(1 << i);
	
    }

    printf("\n누적 합의 결과 값: %d\n", sum);
    printf("누적 합의 2진수 표현:\n");
    print_binary(sum);

    return 0;
}