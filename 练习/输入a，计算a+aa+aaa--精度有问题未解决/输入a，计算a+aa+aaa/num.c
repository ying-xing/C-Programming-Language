#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

unsigned long long Num(int power, unsigned long long num)
{
	unsigned long long avg = pow2(10, power);
	num *= avg;
	return num;
}