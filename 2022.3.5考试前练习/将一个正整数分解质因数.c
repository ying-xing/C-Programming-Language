#include <stdio.h>


int main(void)
{
	int num = 0;
	int i = 0;
	
	printf("请输入一个正整数\n");
	scanf("%d", &num);
	printf("%d=", num);
	
	for (i=2; i<=num; i++)
	{
		while (num != i)
		if (0 == num%i)
		{
			printf("%d*", i);
			num /= i;
		}
		else
		break;
		
		
	}
	printf("%d", num);
	
	
	return 0;
}