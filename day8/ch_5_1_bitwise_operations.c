#include <stdio.h>

int main(){
    int a = 5; // 0101
    int b = 3; // 0011

    printf("a & b: %d\n", a & b); // 0001
    printf("a | b: %d\n", a | b); // 0111
    printf("a ^ b: %d\n", a ^ b); // 0110
    printf("~a: %d\n", ~a);		  // 1010

    int c = 8; // 1000
    printf("c << 1: %d\n", c << 1);	// 10000 = 16
    printf("c >> 1: %d\n", c >> 1); // 0100 = 4

    return 0;
}