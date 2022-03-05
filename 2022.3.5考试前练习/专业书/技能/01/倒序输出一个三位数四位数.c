#include <stdio.h>

int main(void)
{
	int num = 0;
	int i = 0;
	scanf("%d", &num);
	for (i=1; i<=num; i*=10)
	{
		printf("%d", num/i%10);
		
	}
	printf("¹þ¹þ");
	return 0;
}