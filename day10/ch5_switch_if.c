#include <stdio.h>

int main()
{
	int day = 3;

	if (day == 1)
	{
		printf("월요일\n");
	}
	else if (day == 2)
	{
		printf("화요일\n");
	}
	else if (day == 3)
	{
		printf("수요일\n");
	}
	else if (day == 4)
	{
		printf("목요일\n");
	}
	else if (day == 5)
	{
		printf("금요일\n");
	}
	else
	{
		printf("주말말\n");
	}

	return 0;
}