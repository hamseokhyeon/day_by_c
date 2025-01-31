#include <stdio.h>
#include <time.h> // 시간 측정을 위한 라이브러리

int main() {
    clock_t start, end;
    double cpu_time_used;

    // RGB 데이터를 개별 변수로 처리
    unsigned char red = 255, green = 128, blue = 64;
    printf("개별 변수 접근 결과:\n");
    start = clock();
    for (int i = 0; i < 10000000; i++) { // 100만 번 읽기
        unsigned char r = red;
        unsigned char g = green;
        unsigned char b = blue;
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("개별 변수 접근 시간: %f 초\n", cpu_time_used);

    printf("Red: %d, Green: %d, Blue: %d\n", red, green, blue);
    printf("변수 red의 크기: %lu 바이트\n", sizeof(red));
    printf("변수 green의 크기: %lu 바이트\n", sizeof(green));
    printf("변수 blue의 크기: %lu 바이트\n", sizeof(blue));

    // RGB 데이터를 하나의 변수로 처리
    unsigned int rgb = (255 << 16) | (128 << 8) | 64;
    printf("\n압축된 변수 접근 결과:\n");
    start = clock();
    for (int i = 0; i < 10000000; i++) { // 100만 번 읽기
        unsigned char r = (rgb >> 16) & 0xFF;
        unsigned char g = (rgb >> 8) & 0xFF;
        unsigned char b = rgb & 0xFF;
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("압축된 변수 접근 시간: %f 초\n", cpu_time_used);

    printf("Red: %d, Green: %d, Blue: %d\n", (rgb >> 16) & 0xFF, (rgb >> 8) & 0xFF, rgb & 0xFF);
    printf("변수 rgb의 크기: %lu 바이트\n", sizeof(rgb));

    return 0;
}
