#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int My_strlen(char* str2)
{
	int count = 0;

	for (; *str2 != '\0'; str2++)
	{
		count++;
	}
	return count;
}

void Reverse_string(char* str1)
{
	char tmp = 0;
	int len = 0;

	len = My_strlen(str1);
	//printf("%d\n", len);
	tmp = *str1;
	*str1 = *(str1 + len - 1);
	*(str1 + len - 1) = '\0';
	if (My_strlen(str1 + 1) >= 2)
		//	if (len >= 3)
	{
		Reverse_string(str1 + 1);
	}
	*(str1 + len - 1) = tmp;
}

int main(void)
{
	char arr[100] = { 0 };

	gets(arr);

	Reverse_string(arr);

	puts(arr);


	return 0;
}