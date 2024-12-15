#include <stdio.h>

int main(){
    double num1, num2;
	printf("첫 번째 실수를 입력하세요: ");
	scanf("%lf", &num1);

	printf("두 번쨰 실수를 입력하세요: ");
    scanf("%lf", &num2);

    if(num2 !=0 ){
  		double result = num1 / num2;
		printf("나눗셈 결과: %.3f\n", result);
	} else {
		printf("0으로 나눌 수 없습니다.\n");
	}
  

    return 0;
}