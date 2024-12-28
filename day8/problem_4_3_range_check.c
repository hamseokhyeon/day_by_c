#include <stdio.h>

int main(){
    int x;
    printf("정수x를 입력하세요: ");
    scanf("%d", &x);

	if(10 <= x && x <= 50){
		printf("x는 범위 안에 있습니다.\n"); // 조건이 참일 경우
	} else {
		printf("x는 범위 밖에 있습니다.\n"); // 조건이 거짓일 경우
	}

    
    return 0;
}