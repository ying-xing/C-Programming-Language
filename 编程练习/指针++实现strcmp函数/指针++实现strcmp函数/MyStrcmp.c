#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

/*
	功能：比较两个字符串大小
	返回值：1 //第一个实参大于第二个实参
			-1 //第一个实参小于第二个实参
			0 //第一个实参等于第二个实参
	形参1：第一个字符串首地址
	形参2：第二个字符串首地址
*/
int MyStrcmp(const char* str1, const char* str2)
{
	for (; *str1 == *str2; str1++, str2++)
	{
		if ('\0' == *str1)
		{
			return 0;
		}
	}
	return *str1 > *str2 ? 1 : -1;
}