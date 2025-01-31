#include <stdio.h>

int main(){
    int x;

    printf("단 입력: ");
    scanf("%d", &x);

	// 3 x 1 = 3;
    for(int i=1; i<=9; i++){
        printf("%d x %d = %d \n", x, i, x*i);
    }
    return 0;
}