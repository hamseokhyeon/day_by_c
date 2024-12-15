#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    
	printf("a, b, c, d, e 값을 입력하세요 (공백으로 구분): ");

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	if (e == 0){
		printf("e값은 0이 될 수 없습니다.\n");
		return 1;
	}

    int result = (a+b) * c - d / e;

    printf("%d\n", result);

    return 0;
}