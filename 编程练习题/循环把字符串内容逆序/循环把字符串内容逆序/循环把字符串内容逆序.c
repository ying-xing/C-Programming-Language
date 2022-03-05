#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int My_strlen(char* arr)
{
	int count = 0;

	while (( *arr) != '\0')
	{
		arr++;
		count++;
	}
	return count;
}

void Reverse_string(char* arr)
{
	int left = 0;
	int right = 0;
	int len = 0;
	char tmp = 0;

	len = My_strlen(arr);
	//printf("%d\n", len);
	right = len - 1;
	for (left = 0; left < right; left++, right--)
	{
		tmp = *(arr + left);
		*(arr + left) = *(arr + right);
		*(arr + right) = tmp;
	}

}

int main(void)
{
	char arr[100] = { 0 };

	gets(arr);

	Reverse_string(arr);

	puts(arr);

	return 0;
}