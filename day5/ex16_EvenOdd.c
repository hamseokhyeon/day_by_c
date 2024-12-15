#include <stdio.h>
#include <stdbool.h>

int main(){
	int num;
    bool is_even;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

	// num % 2 == 0
	is_even = (num % 2 == 0);

	if(is_even){
		 printf("입력한 수는 짝수입니다.\n");
	} else {
		printf("입력한 수는 홀수입니다.\n");
	}
	
	return 0;
}