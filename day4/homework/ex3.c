#include <stdio.h>

int main(){
    char fc;
	printf("가장 좋아하는 알파벳 한 글자를 입력하세요: ");
	scanf("%c", &fc);
	printf("당신이 입력한 알파벳은 %c입니다.\n", fc);
	return 0;
}