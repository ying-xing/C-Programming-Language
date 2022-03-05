#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

float Pow(int n, int k)
{
	if (k > 0)
	{
		return n * Pow(n, k-1);
	}
	else
	{
		if (0 == k)
		{
			return 1;
		}
		else
		{
			if (0 > k)
			{
				return 1.0/Pow(n, -k);
			}
		}
	}
}

int main(void)
{
	int n = 0;
	int k = 0;
	float ret = 0;

	scanf("%d %d", &n, &k);

	ret = Pow(n, k);

	printf("%f\n", ret);

	return 0;
}