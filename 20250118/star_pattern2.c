#include <stdio.h>

int main() {
	int row = 5;
	int col = 5;

    for (int i = 1;  i <= row; i++) {
        
		for(int j = 1; j<=row-i; j++ ){	// 공백 출력
			printf(" "); // i번째 줄에 i개의 공백 출력
		}

		for (int k = 1; k <= i; k++) {
            printf("*"); // i번째 줄에 i개의 * 출력
        }
        
		printf("\n"); // 줄바꿈
    }
    return 0;


	/**
	
	*****
	*****
	*****
	*****
	*****
	
	    *
   	   **
      ***
     ****
    *****
	
	 */
}
