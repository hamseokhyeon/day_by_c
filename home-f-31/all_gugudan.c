#include <stdio.h>

int main(){

	for(int i = 2; i <= 9; i++){
        printf("=== %d단 ===\n", i);
		for(int j = 1; j <=9; j++){
            printf("%d x %d = %d \n", i,  j,  j*i);
        }
    }

    return 0;
}