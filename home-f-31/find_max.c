#include <stdio.h>

int main(){
    int n, num, max;

    printf("n 입력: ");
    scanf("%d", &n);

    for(int i = 1;i <= n;i++){
		printf("숫자 입력: ");
        scanf("%d", &num);

		// 넣은 숫자 중에 가장 큰것을 찾아라 ?
		// num 받은 수가 max 보다 크냐?
		if(num > max){
			max = num;
		}
    }
	
	printf("최댓값 : %d \n", max);
    
    return 0;
}