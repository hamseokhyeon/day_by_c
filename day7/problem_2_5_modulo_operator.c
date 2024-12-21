#include <Stdio.h>

int main(){
    int a, b;
    printf("두 정수 a와 b의 값을 입력하세요: ");
    scanf("%d %d", &a, &b);

    if(b == 0) {
		printf("0으로 나눌 수 없습니다.\n");
		return 1;
    }
	a %= b; // a = a % b;

    printf("나머지 : %d\n" ,a );

    return 0;
}