#include <stdio.h>

int main() {
    char name[50];
    int age;
    printf("이름을 입력하세요: ");
    scanf("%s", name);
    printf("나이를 입력하세요: ");
    scanf("%d", &age);
    printf("안녕하세요, %s님! 당신은 %d살입니다.\n", name, age);
    return 0;
}
