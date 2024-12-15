#include <stdio.h>

int main(){
    int num1, num2;
    printf("첫번째 수를 입력하세요: ");
    scanf("%d", &num1);

    printf("두번째 수를 입력하세요: ");
    scanf("%d", &num2);
    
    printf("덧셈: %d\n ", num1 + num2);
    printf("뺼셈: %d\n ", num1 - num2);
    printf("곱셈: %d\n ", num1 * num2);

	if(num2 != 0){
    	printf("나눗셈: %d\n ", num1 / num2);
	} else {
		printf("0으로 나눌 수 없습니다.\n");
	}

    return 0;
}
