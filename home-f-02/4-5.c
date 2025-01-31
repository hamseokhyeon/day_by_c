#include  <stdio.h>

int main(){
    int num = 255;
    int bit_position = 4;
    int mask = 1 << (bit_position - 1); // 0, 1, 2, 3, 4
    int result = (num & mask) >> (bit_position - 1);

    printf("%d에서 %d번째 비트 값은 %d입니다.\n", num, bit_position, result);
    return 0;
}