#include <stdio.h>

int main() {
    int a, b;

    printf("두 정수를 입력하세요 (공백으로 구분): ");
    scanf("%d %d", &a, &b);

    printf("교환 전: a = %d, b = %d\n", a, b);

    a = a + b--; // b 감소 전 값을 사용 
    b = a - ++b; // b 증가 후 값을 사용  
    a = a - b;
	

    printf("교환 후: a = %d, b = %d\n", a, b);

    return 0;
}
