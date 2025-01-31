#include <stdio.h>

int main(){
    int number;

    do {
        printf("10 이상의 숫자를 입력하세요: ");
        scanf("%d", number);
    } while (number < 10);

	/**
	number = 7 , 7 < 10 , true, 계속.
	number = 10, 10 < 10, false, 종료.
	 */

    printf("입력한 숫자: %d\n", number);
    return 0;
}

