#include <stdio.h>

int main(void)
{
	int num = 0;
	int a = 0;
	
	do
	{
		printf("������С��500��������\n");
		scanf("%d", &num);
		
	}while(num > 500);
	
	a = sqrt(num);
	printf("%d", a);
	
	return 0;
}