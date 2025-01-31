#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
	int secret = rand() % 100 + 1; // 렌덤 정수.
	int guess; // 사용자 입력값.

	printf("secret = %d\n", secret);
	printf("1부터 100 사이의 숫자를 맞춰보세요.\n");

	while (1) {// 무한루프..
		printf("숫자를 입력하세요: ");
		scanf("%d", &guess);

		if (guess > secret) {
            printf("너무 큽니다.\n");
        } else if (guess < secret) {
            printf("너무 작습니다.\n");
        } else {
            printf("정답입니다!\n");
            break; // 정답이면 반복 종료
        }
	}

    return 0;
}