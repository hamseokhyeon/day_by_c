#include <stdio.h>

int main(){
    int n;
    printf("정수 n을 입력하세요: ");
    scanf("%d", &n);

	printf("짝수 수열:\n");
    for(int i = 2; i <= n; i+= 2){
        printf("%d ", i);
		// 2, 4, 6, 8;
    }

	printf("\n홀수 수열:\n");
	for(int i = 1; i <= n; i+= 2){
        printf("%d ", i);
    }

    return 0;
}