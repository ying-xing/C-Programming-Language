#include <stdio.h>


int main(void)
{
	int i, count = 0;
	float scores[10], ave;
	printf("����10��ѧ���ɼ���\n");
	for (i=0; i<10; i++)
	{
		scanf("%f", &scores[i]);
		ave += scores[i];
	}
	ave /= 10;
	printf("\nƽ���ɼ���%.1f\n", ave);
	for (i=0; i<10; i++)
		if (scores[i] < ave)
			count++;
	printf("����ƽ���ɼ���������%2d", count);
	
	return 0;
}