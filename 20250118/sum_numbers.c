#include <stdio.h>

int main(){
    int sum = 0;

	for (int i = 1; i <= 5; i++) {
		sum += i;
	}
	printf("1부터 5까지의 합: %d\n", sum);
	return 0;

}