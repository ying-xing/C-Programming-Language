#include <stdio.h>

int main(void)
{
	int i, j, station, total;
	printf("�����복վ����");
	scanf("%d", &station);
	for (i=1; i<station; i++)
	for (j=i+1; j<=station; j++)
	total += 2;
	printf("��Ʊ����=%d\n", total);
	
	
	return 0;
}