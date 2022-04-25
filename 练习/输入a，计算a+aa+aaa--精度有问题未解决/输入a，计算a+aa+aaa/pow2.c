#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

unsigned long long pow2(int a, int n)
{
	unsigned long long avg = 1;
	for (int i = 1; i <= n; i++)
	{
		avg *= a;
	}

	return avg;
}