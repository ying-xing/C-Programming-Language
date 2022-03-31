/*
	功能：去掉字符串中空格
	返回值：无
	形参1：字符串首地址
*/
void StrNoSpace(const char* str)
{
	char* p = str;

	for (; *str != '\0'; str++)
	{
		if (*str != ' ')
		{
			*p = *str;
			p++;
		}
	}
	*p = '\0';
}