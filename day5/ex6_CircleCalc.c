#include <stdio.h>

int main(){
    const float PI = 3.14159;
    float radius = 0;

	printf("원의 반지름을 입력하세요: ");
	scanf("%f", &radius);

	float area = PI * radius * radius;
	float circumference = 2 * PI * radius;

    printf("원의 넓이: %.2f\n", area);
	printf("원의 둘레: %.2f\n" ,circumference);

    return 0;
}