#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>

int main(void)
{
	char str[20] = { 0 };
	int count[26] = { 0 };

	gets(str);

	int len = strlen(str);
	printf("%d\n", len);

	for (int i = 0; i < len; i++)
	{
		count[str[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (0 != count[i])
		{
			printf("%c字符有%d个\n", i + 'a', count[i]);
		}
	}

	system("pause");

	return 0;
}