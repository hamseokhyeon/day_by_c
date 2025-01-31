#include <stdio.h>

int main(){
    int n;
    
    printf("N 입력: ");
    scanf("%d",&n);

    // <= ~ 까지.
    // 짝수는? 2나누어 나머기가 0인거. => i / 2 == 0 => i % 2 == 0
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
    
    return 0;
}