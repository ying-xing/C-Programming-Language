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
	
	printf("百位%d 十位%d 个位%d\n", bai, shi, ge);
	
	return 0;
}