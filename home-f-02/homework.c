#include <stdio.h>

int rotateRight(int num, int bits) {
    return (num >> bits) | (num << (8 - bits));
}

int main(){
    int num = 12;
    int bits = 2;
    int result = rotateRight(num, bits);
    
    printf("%d의 %d비트 오른쪽 회전 결과는 %d입니다.\n", num, bits, result);
    return 0;
}