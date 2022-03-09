#include <stdio.h>

int main(void)
{
	char arr1[100] = {0};
	char arr2[100] = {0};
	int i = 0;
	
	gets(arr1);
	
	for (i=0; arr1[i] != '\0'; i++)
	{
		arr2[i] = arr1[i];
	}
	puts(arr2);
	
	
	return 0;
}