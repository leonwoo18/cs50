//����ָ��ͬʱָ������char����
//malloc()
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>

int main(void)
{
	char* s = get_string("s: ");
	int n = strlen(s);
	char* t = malloc(n + 1);

	//for (int i = 0; i < n; i++)         û�аѿ�ֹ�ַ�\0���ƹ���
	for (int i = 0; i <= n; i++)
	{
		t[i] = s[i];
	}
	t[0] = toupper(t[0]);
	printf("%s\n", s);
	printf("%s\n", t);
}
