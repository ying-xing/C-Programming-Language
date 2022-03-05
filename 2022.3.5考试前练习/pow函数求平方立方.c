#include <stdio.h>
#include <math.h>

int main(void)
{
	float x = 0.0;
	
	scanf("%f", &x);
	
	printf("二次%f 三次%f\n", pow(x, 2), pow(x, 3));
	
	
	return 0;
}