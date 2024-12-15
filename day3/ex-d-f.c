#include <stdio.h>

int main() {
    float f = 3.14159265358979323846;
    double d = 3.14159265358979323846;

    printf("float: %.20f\n", f);  // 소수점 이하 약 6~7자리까지 정확
    printf("double: %.20lf\n", d);  // 소수점 이하 약 15~16자리까지 정확

    return 0;
}
