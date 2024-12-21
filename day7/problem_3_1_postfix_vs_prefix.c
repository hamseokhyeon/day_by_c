#include <stdio.h>

int main(){
    int i = 5;

	printf("초기값: i = %d\n", i); 		   //5
    printf("후위 연산 (i++): %d\n", i++);  //5
    printf("후위 연산 후 i %d\n", i); 	   //6
    
	i = 5; // 초기화
	printf("전위 연산 (++i): %d\n", ++i);
    printf("전위 연산 후 i %d\n", i);
    
    return 0;
}