#include <stdio.h>

int main(void)
{
	int j, s = 0, n;
	printf("请输入一个数：");
	scanf("%d", &n);
	for (j=1; j<n; j++)
	{
		if (0 == n%j)
		s += j;
	}
	if (s == n)
	{	
		printf("%d is a perfect number\n", n);
	}
	else
		printf("%d is not a perfect number", n);
	
	
	return 0;
}