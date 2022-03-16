#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>
#include <assert.h>

unsigned int MyStrlen(const char * const str1)
{
	assert(str1 != NULL);
	const char* str2 = str1;

	while ( '\0' != *str2++ )
	{
		;
	}
	return str2 - str1 - 1;
}

int main(void)
{
	char str1[] = "你好中国！";
	int len = MyStrlen(str1);
	int len2 = strlen(str1);

	printf("len = %d\n", len);
	printf("len2 = %d\n", len2);

	return 0;
}