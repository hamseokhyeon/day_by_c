#include <stdio.h>

int main(){
    int x;
    printf("정수x를 입력하세요: ");
    scanf("%d", &x);

	

    printf("짝수이고 양수인지: %d\n", (x % 2 == 0) && (x > 0));
    printf("홀수또는 음수인지: %d\n", (x % 2 != 0) || (x < 0));
	
    
	
	
	return 0;
}