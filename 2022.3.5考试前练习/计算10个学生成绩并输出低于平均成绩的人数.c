#include <stdio.h>


int main(void)
{
	int i, count = 0;
	float scores[10], ave;
	printf("输入10个学生成绩：\n");
	for (i=0; i<10; i++)
	{
		scanf("%f", &scores[i]);
		ave += scores[i];
	}
	ave /= 10;
	printf("\n平均成绩：%.1f\n", ave);
	for (i=0; i<10; i++)
		if (scores[i] < ave)
			count++;
	printf("低于平均成绩的人数：%2d", count);
	
	return 0;
}