#include <stdio.h>

int main(void)
{
	int year, a = 0;
	printf("�����ѯ\n������Ҫ��ѯ����ݣ�\n");
	scanf("%d", &year);
	if (0 == year%400)
		a = 1;
	else if (year%4==0)
			if (0 != year%100)
				a = 1;
			else a = 0;
	
	if (a==1)
		printf("%d������", year);
	else
		printf("%d��������", year);
	
	
	return 0;
}