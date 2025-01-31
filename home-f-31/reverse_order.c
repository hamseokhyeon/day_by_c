#include <stdio.h>

int main(){
    int n;

    printf("n 입력: ");
    scanf("%d", &n);

	// n부터 1까지 출력
    for(int i = n; i >= 1; i--){
        printf("%d ", i);
    }

    return 0;
}