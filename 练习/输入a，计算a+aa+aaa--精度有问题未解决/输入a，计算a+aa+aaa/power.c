#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

int Power(const long long const* num)
{
	int power = 0;
	for (int i = 1; 0 != ( * num ) / i; i *= 10)
	{
		power++;
	}
	//printf("%d\n", power);
	return power;
}