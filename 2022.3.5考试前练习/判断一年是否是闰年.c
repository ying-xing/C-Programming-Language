#include <stdio.h>

int main(void)
{
	int year, a = 0;
	printf("闰年查询\n请输入要查询的年份：\n");
	scanf("%d", &year);
	if (0 == year%400)
		a = 1;
	else if (year%4==0)
			if (0 != year%100)
				a = 1;
			else a = 0;
	
	if (a==1)
		printf("%d是闰年", year);
	else
		printf("%d不是闰年", year);
	
	
	return 0;
}