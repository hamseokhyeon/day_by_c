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
    int num  = 0b10101010;
    int mask = 0b11110000;

    printf("초기값: ");
    print_binary(num);

    printf("마스크 적용 (AND): ");
    print_binary(num & mask);

    printf("마스크 적용 (OR): ");
    print_binary(num | mask);

    printf("마스크 반전 (XOR): ");
    print_binary(num ^ mask);

    return 0;
}