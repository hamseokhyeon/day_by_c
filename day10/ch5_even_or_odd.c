#include <stdio.h>

int main()
{
	int num = 10;

	printf("입력한 수는 %s\n", (num % 2 == 0) ? "짝수" : "홀수");

	if (num % 2 == 0){
		printf("짝수");
	}
	else{
		printf("홀수");
	}

	return 0;
}