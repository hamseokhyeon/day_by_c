#include <stdio.h>

int main(){
    int n, f = 1;

    printf("n 입력: ");
    scanf("%d", &n);
    
	/**
		1! = 1
		2! = 1 * 2
		3! = 1 * 2 * 3
		5! = 1 * 2 * 3 * 4 * 5 = 120
	 */

    for(int i=1; i<=n; i++){
        printf("%d ", i);
        
		f *= i;
    }

	printf("%d! = %d\n", n, f);

    return 0;
}