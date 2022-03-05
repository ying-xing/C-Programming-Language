#include <stdio.h>
#include <math.h>
//分析:已知三角形的三边长度求三角形的面积，要使用海伦公式:
//area =根号（s(s-a)(s-b)(s-c)）其中: s=（a+b+c）/2

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
		printf("周长%.2f 面积%.2f\n", a+b+c, area);
	}
	else
	{
		printf("不能构成三角形");
	}
	
	
	return 0;
}