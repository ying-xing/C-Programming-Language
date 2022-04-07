#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE* fp = fopen("test.txt", "w");
	if (NULL == fp)
	{
		perror("fopen error");
	}
	char buf[4096] = { 0 };

	while (1)
	{
		fgets(buf, 4096, stdin);
		if (0 == strcmp(buf, ":wq\n"))
		{
			break;
		}
		fputs(buf, fp);
	}

	fclose(fp);

	system("pause");

	return 0;
}