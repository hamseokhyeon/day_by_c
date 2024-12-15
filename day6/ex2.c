#include <stdio.h>

int main(){
    int a = 5;
    a += 3; // a = a + 3
    printf("+= 연산 후 a: %d\n", a); //8
    
	a -= 2; // a = a - 2
    printf("-= 연산 후 a: %d\n", a); //6
    
	a *= 4; // a = a * 4
    printf("*= 연산 후 a: %d\n", a); //24
    
	a /= 3; // a = a / 3
    printf("/= 연산 후 a: %d\n", a); //8
    
	a %= 5; // a = a % 5
    printf("%= 연산 후 a: %d\n", a); //3
    
	return 0;
}