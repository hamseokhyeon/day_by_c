#include <stdio.h>

int main(){
    int x;
	printf("x 값을 입력하세요: ");
	
	scanf("%d", &x);
    int result = -x + 2 * (-3) - 5 ;
	
	printf("결과값은 %d입니다.\n", result);

  return 0;
}