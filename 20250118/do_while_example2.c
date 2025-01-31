#include <stdio.h>

int main(){

	int number;

	printf("10 이상의 숫자를 입력하세요: ");
    scanf("%d", &number);

	while (number < 10){
		printf("10 이상의 숫자를 입력하세요: ");
		scanf("%d", &number);
	}

	printf("입력한 숫자는 %d입니다.\n", number);

	return 0;
}