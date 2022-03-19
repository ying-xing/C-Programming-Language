#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>
#include <string.h>

void Reverse(char* left, char* right)
{
	for (; left <= right; left++, right--)
	{
		char tmp = 0;
		tmp = *right;
		*right = *left;
		*left = tmp;
	}
}

int main(void)
{
	char str[100] = "0";
	//char arr[16][16][16] = {0};

	gets(str);

	int len = strlen(str);
	Reverse(&str[0], &str[0] + len - 1);

	char* start = NULL;
	for (start = &str[0]; *start != '\0'; )
	{
		char* end = start;

		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		Reverse(start, end-1);
		if (' ' == *end)
		{
			start = end + 1;
		}
		else
		{
			start = end;
		}
	}
	puts(str);

	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);
	//printf("%p\n", &arr[0][0]);
	//printf("%p\n", &arr[0][0][0]);

	//printf("%p\n", arr+ 1);
	//printf("%p\n", &arr[0] + 1);
	//printf("%p\n", &arr[0][0] + 1);
	//printf("%p\n", &arr[0][0][0] + 1);

	system("pause");

	return 0;
}