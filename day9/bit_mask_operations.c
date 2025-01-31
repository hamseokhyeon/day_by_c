#include <stdio.h>


// 10진수를 2진수 문자열로 변환하는 함수
void print_binary(int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0) printf(" "); // 가독성을 위해 4비트씩 띄움
    }
    printf("\n");
} 

// 특정 비트를 1로 설정
int set_bit(int num, int pos) {
    return num | (1 << pos);
}

// 특정 비트가 1인지 확인
int check_bit(int num, int pos) {
    return (num & (1 << pos)) != 0;
}

// 특정 비트를 0으로 설정
int clear_bit(int num, int pos) {
    return num & ~(1 << pos);
}

int main() {
    int num = 5; // 초기값: 00000000 00000000 00000000 00000101

    printf("초기 비트: ");
    print_binary(num);

    // 2번 비트를 1로 설정
    num = set_bit(num, 2);
	// 2번 비트를 1로 설정: 0000 0000 0000 0000 0000 0000 0000 0111 
    printf("2번 비트를 1로 설정: ");
    print_binary(num);

    // 2번 비트가 1인지 확인
    if (check_bit(num, 2)) {
        printf("2번 비트가 1입니다.\n");
    } else {
        printf("2번 비트가 0입니다.\n");
    }

    // 2번 비트를 0으로 설정
    num = clear_bit(num, 2);
    printf("2번 비트를 0으로 설정: ");
    print_binary(num);

    return 0;
}
