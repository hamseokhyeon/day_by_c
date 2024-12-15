#include <stdio.h>

int main(){
    int count = 10;

    // for(int i=10; i >=0; i--){
    // 	printf("카운트: %d \n", i);
	// }

	while(count >=0 ){
		printf("카운트: %d \n", count);
		count -= 1; // count = count -1;
	}
    
    return 0;

}

/**
카운트: 10
카운트: 9
카운트: 8
...
카운트: 0

 */