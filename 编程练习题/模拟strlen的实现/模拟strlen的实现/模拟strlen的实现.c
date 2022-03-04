#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int My_strlen(char *parr)
{
	if ('\0' != *parr)
	{
		return 1 + My_strlen(parr + 1);
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	char arr[] = "haha\nhehe";

	printf("%d\n", My_strlen(arr));


	return 0;
}