#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>
#include <assert.h>

char* My_strcpy(const char* const destintion, const char* source)
{
	for (char* ret = destintion; *ret++ = *source++; )
	{
		;
	}
	return  destintion;
}

int main(void)
{
	char str1[40] = "xxxxxxxxxxxxxxxxxxxxxxxxxxx";
	char str2[] = "hello\0你好";	

	printf("%s", My_strcpy(str1, str2));


	return 0;
}