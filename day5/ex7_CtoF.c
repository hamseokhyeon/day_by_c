#include <stdio.h>

int main() {
    float celsius;
    printf("섭씨 온도를 입력하세요: ");
    scanf("%f", &celsius);

    float fahrenheit = celsius * 9 / 5 + 32;
    printf("화씨 온도: %.2f°F\n", fahrenheit);

    return 0;
}