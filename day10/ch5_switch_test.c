#include <stdio.h>

int main(){
    int day = 3;

    switch (day) {
        case 1:
            printf("월요일\n");
            break;
        case 2:
            printf("화요일\n");
            break;
        case 3:
            printf("수요일\n");
            break;
        case 4:
            printf("목요일\n");
            break;
        case 5:
            printf("금요일\n");
            break;
        defalut: 
            printf("주\n");
            break;
    }
    return 0;
}