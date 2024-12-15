#include <stdio.h>

int main(){
    signed int signed_num = -10;  // -2147483648 ~ 2147483647)
    unsigned int unsigned_num = -10; // 0 ~ 4294967296

    printf("부호 있는 정수: %d\n", signed_num);
    printf("부호 없는 정수 : %u\n", unsigned_num);
    
	return 0;
}