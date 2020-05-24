//两个指针同时指向两个char数组
//malloc()
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>

int main(void)
{
	char* s = get_string("s: ");
	char* t = malloc(strlen(s) + 1);

	strcpy(t, s);

	t[0] = toupper(t[0]);
	printf("%s\n", s);
	printf("%s\n", t);
}
