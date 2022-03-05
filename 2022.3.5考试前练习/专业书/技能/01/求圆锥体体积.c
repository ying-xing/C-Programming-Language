#include <stdio.h>


int main(void)
{
	float r = 0.0;
	float h = 0.0;
	
	scanf("%f %f", &r, &h);
	
	printf("%f", (3.1415926*2*r)*h/3);
	
	return 0;
}