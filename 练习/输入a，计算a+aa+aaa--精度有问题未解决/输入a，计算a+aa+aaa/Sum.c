#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

unsigned long long Sum(const int const * a, const int const * n)
{
	unsigned long long sum = 0;
	unsigned long long num = *a;
	unsigned long long num2 = *a;
	int power = 0;
	//printf("%d ", sizeof(num2));
	int power1 = Power(&num);
	sum += num2;
	printf("%d", num2);
	for (int i = 1; i < *n; i++)
	{
	

		power = Power(&num2);

		num2 += Num(power, num);

		sum += num2;

		printf("+%d", num2);
	}

	return sum;
}