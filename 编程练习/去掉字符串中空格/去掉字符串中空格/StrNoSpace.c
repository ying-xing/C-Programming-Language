/*
	���ܣ�ȥ���ַ����пո�
	����ֵ����
	�β�1���ַ����׵�ַ
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