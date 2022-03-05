#include <stdio.h>

int main(void)
{
	int i, j, station, total;
	printf("请输入车站数：");
	scanf("%d", &station);
	for (i=1; i<station; i++)
	for (j=i+1; j<=station; j++)
	total += 2;
	printf("车票种类=%d\n", total);
	
	
	return 0;
}