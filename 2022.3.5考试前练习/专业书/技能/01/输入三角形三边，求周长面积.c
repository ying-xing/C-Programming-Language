#include <stdio.h>
#include <math.h>
//����:��֪�����ε����߳����������ε������Ҫʹ�ú��׹�ʽ:
//area =���ţ�s(s-a)(s-b)(s-c)������: s=��a+b+c��/2

int main(void)
{
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	float s = 0.0;
	float area = 0.0;
	
	scanf("%f %f %f", &a, &b, &c);
	if (a+b>c && a+c>b && b+c>a)
	{
		s = (a+b+c) / 2;
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		printf("�ܳ�%.2f ���%.2f\n", a+b+c, area);
	}
	else
	{
		printf("���ܹ���������");
	}
	
	
	return 0;
}