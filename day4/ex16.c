#include <stdio.h>

int main(){
    int x = 10, y = 20, temp;
    printf("교환 전 : x = %d, y = %d\n", x, y);
    
	temp = x; //temp = 10
    x = y;	  //x = 20
    y = temp; //y = 10

    
	printf("교환 후: x = %d, y = %d\n", x, y);
    return 0;
}