#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>

int Mystrlen(char *str)
{
	char* start = str;

	for (; *str != '\0'; str++)
	{

	}

	return str - start;

}

int main(void)
{
	char str[] = "asddf1we2";
	int len = 0;

	len = Mystrlen(str);

	printf("%d\n", len);

	return 0;
}