#include <stdio.h>

// 10진수를 2진수 문자열로 변환하는 함수
void print_binary(int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0) printf(" "); // 가독성을 위해 4비트씩 띄움
    }
    printf("\n");
} 

// 특정 비트를 반전
int toggle_bit(int num, int pos) {
    return num ^ (1 << pos);
}

int main() {
    int num = 5; // 초기값: 00000000 00000000 00000000 00000101
    printf("초기 비트: ");
    print_binary(num);


    // 1번 비트 반전
    num = toggle_bit(num, 1); 
    printf("1번 비트 반전: "); // 111
    print_binary(num);

    // 2번 비트 반전
    num = toggle_bit(num, 2);
    printf("2번 비트 반전: "); // 011
    print_binary(num);

    return 0;
}
