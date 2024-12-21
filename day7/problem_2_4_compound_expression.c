#include <Stdio.h>

int main(){
    int a, b, c, d, result;  // 1, 2, 3 ,4
	
	printf("a, b, c, d 값을 입력하세요 (공백으로 구분): ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	result = a;
	printf("초기값 result = %d\n", result); // 1
	
	result += b * 2;
    printf("result += b * 2 -> %d\n", result); // result += 1 +  2 * 2; => 1 + 4  = 5
	
	result -= c / 3;
    printf("result -= c / 3 -> %d\n", result); // result -= 3 / 3 = 1 => 5 - 1 = 4

	result *= d + 4;
    printf("result *= d + 4 -> %d\n", result); // (4 + 4) * 4 = 32

	result /= 5;
	printf("result /= 5 -> %d\n", result); // 32/5 = 6

    return 0;
}
