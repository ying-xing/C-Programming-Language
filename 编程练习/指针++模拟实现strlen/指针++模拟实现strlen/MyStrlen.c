#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

int MyStrlen(const char* const str)
{
	const char *p = str;
	for (; *p != '\0'; p++)
	{
		;
	}
	return p - str;
}