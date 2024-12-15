#include <stdio.h>

int main(){
    int num1, num2;

    printf("첫 번째 정수를 입력하세요: ");
	scanf("%d", &num1);

	printf("두 번째 정수를 입력하세요: ");
	scanf("%d", &num2);

	printf("합: %d\n", num1 + num2);
    printf("차: %d\n", num1 - num2);

    return 0;
}