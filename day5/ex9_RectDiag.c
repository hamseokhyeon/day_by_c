#include <stdio.h>
#include <math.h>

int main(){
    double num1, num2;
    printf("직사각형의 가로의 값을 입력하세요: ");
    scanf("%lf", &num1);

    printf("직사각형의 세로의 값을 입력하세요: ");
    scanf("%lf", &num2);

    double diagonal = sqrt(num1 * num1 + num2 * num2);
    printf("대각선의 길이: %.2f", diagonal);

    return 0;
}