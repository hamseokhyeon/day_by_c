#include <stdio.h>
#include <stdbool.h>

int main(){
    int age;
    printf("나이를 입력하세요.");

    scanf("%d", &age);

	// 18세 이상이면 "true" 출력
	bool isStudent = age >= 18;

    printf("당신은 학생인가요? %s", isStudent ? "true" : "false");
}