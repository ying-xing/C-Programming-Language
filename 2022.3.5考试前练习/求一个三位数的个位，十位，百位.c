#include <stdio.h>

int main(void)
{
	int num = 0;
	int ge = 0;
	int shi = 0;
	int bai = 0;
	
	scanf("%d", &num);
	bai = num / 100 % 10;
	shi = num / 10 % 10;
	ge = num / 1 % 10;
	
	printf("��λ%d ʮλ%d ��λ%d\n", bai, shi, ge);
	
	return 0;
}