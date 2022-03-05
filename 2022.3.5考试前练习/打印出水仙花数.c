#include <stdio.h>

int main(void)
{
	int num = 0;
	int i = 0;
	
	for (i=100; i<1000; i++)
	{
		num = 0;
		num += (i%10) * (i%10) * (i%10)+ (i/10%10) * (i/10%10) * (i/10%10) + (i/100) * (i/100) * (i/100);
		if (num == i)
		{
			printf("%d ", num);
		}
	}
	
	return 0;
}