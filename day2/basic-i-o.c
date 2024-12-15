#include <stdio.h>

int main() {
    int age = 20.5;
    float height = 175.55555555555551;
    char grade = 'A';

    printf("나이: %d\\n", age);
    printf("키: %.5fcm\\n", height);
    printf("학점: %c\\n", grade);

    return 0;
} 