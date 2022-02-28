#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;
	int max = 0;

	scanf("%d %d", &x, &y);

	//普通方法
	max = x > y ? y : x;

	for (; max > 0; max--)
	{
		if (0 == x % max && 0 == y % max)
		{
			printf("最大公约数是%d\n", max);
			break;
		}
	}

	//辗转相除法
	x = 0;
	y = 0;
	max = 0;

	scanf("%d %d", &x, &y);

	for (; 0 != (max = x % y); x = y, y = max)
	{
		
	}
	printf("最大公约数是%d", y);

	return 0;
}

//最小公倍数 = x * y / 最大公约数；