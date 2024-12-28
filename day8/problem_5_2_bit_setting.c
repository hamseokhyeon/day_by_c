#include <stdio.h>

int main(){
    int x, n;
    printf("정수 x와 비트 위치 n을 입력하세요 (공백으로 구분): ");
    scanf("%d %d", &x, &n);

	//8, 2 

    x = x  | (1 << n); 
	// 1000, 0001 => 0100 
	// 1000 | 0100 = 1100 = > 12  
	printf("n번째 비트를 1로 설정한 결과: %d\n", x); //1000 => 1010;

    return 0;
}