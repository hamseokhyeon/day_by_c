#include <stdio.h>

int main(){
    int a = 5;
    printf("전위 증감: %d\n", ++a); // 6
    printf("후위 증감: %d\n", a++); // 6
    printf("증감 결과: %d\n", a);   // 7

    int b = 10;
    printf("전위 감소: %d\n", --b); // 9
    printf("후위 감소: %d\n", b--); // 9
    printf("감소 결과: %d\n", b);   // 8
    
    return 0;
}