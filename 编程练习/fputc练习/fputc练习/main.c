#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>

int main(void)
{
	char* filename = "test.txt";

	FILE* fp = fopen(filename, "w");
	if (NULL == fp)
	{
		perror("fopen error");
		return -1;
	}
	
	for (char ch = 'A'; ch <= 'Z'; ch++)
	{
		int ret = fputc(ch, fp);
		if (-1 == ret)
		{
			perror("fputs error");
			return -1;
		}
	}
	fclose(fp);
	printf("------------------------\n");

	system("pause");

	return 0;
}