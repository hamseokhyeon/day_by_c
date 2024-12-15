#include <stdio.h>

int main(){
    int count = 0;
    
	printf("현재 카운트: %d\n", count);
	++count;
    count = count + 1;
	
	printf("증가 후 카운트: %d\n", count);
    
	return 0;
}