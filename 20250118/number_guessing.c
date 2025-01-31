#include <stdio.h>

int main(){
    int secret = 7;
    int guess;

    printf("숫자를 맞춰보세요 (1~10): ");
    scanf("%d", &guess);

	/**
		= : 대입
		== : 같다
		!= : 다르다.
        5 7 5==7 ? false 
	 */
    
    while (guess != secret) {
        printf("틀렸습니다. 다시 시도: ");
        scanf("%d", &guess);
    }

    printf("정답입니다!\n");
    return 0;
}