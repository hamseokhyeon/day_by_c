#include <stdio.h>

int main(){
    int n;

    printf("n 입력: ");
    scanf("%d", &n);  
	// <= 
	// 홀수는? n % 2 != 0 , n % 2 == 1
	// i 가 1이 아니라 2 씩 증가 i += 2
    for(int i = 1; i <= n;i++){
        if(i % 2 == 1){
            printf("%d ", i);
        }
    }
    return 0;
}