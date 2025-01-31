#include <stdio.h>

int main(){
    int age;
	printf("나이를 입력하세요: ");
    scanf("%d", &age);

    // if (age > 17) {
    //     printf("입장 가능");
    // } else {
    //     printf("입장 불가");
    //} 

	printf("%s\n", (age > 17) ? "입장 가능" : "입장 불가");
	
    return 0;
}


