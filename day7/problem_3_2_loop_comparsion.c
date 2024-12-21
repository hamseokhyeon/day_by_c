#include <stdio.h>

int main(){
    int n;

	printf("정수 n을 입력하세요: ");
    scanf("%d", &n);

	printf("++i를 0사용한 반복문:\n");
    for(int i = 0; i < n; ++i){ // 전위 증가
		printf("%d ", i);
	}

	printf("\n\ni++를 사용한 반복문:\n");
	for(int i = 0; i < n; i++){  // 후위 증가
		printf("%d ", i);
	}

    return 0;
}