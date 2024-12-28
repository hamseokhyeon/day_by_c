#include <stdio.h>
#include <stdbool.h>

int main(){
    int a = 10, b = 20;

    printf("a == b: %d\n", a == b); // 0
    printf("a != b: %d\n", a != b);	// 1
    printf("a > b: %d\n", a > b); // 0
    printf("a <= b: %d\n", a <= b); // 1

    bool x = true, y = false;
    printf("x && y: %d\n", x && y); // 0
    printf("x || y: %d\n", x || y); // 1
    printf("!x: %d\n", !x); // 0
    
	return 0;
}


