//两个指针同时指向同个char数组

#include <cs50.h>
#include<ctype.h>
#include<stdio.h>

int main(void)
{
	string s = get_string("s: ");
	string t = s;
	t[0] = toupper(t[0]);
	printf("%s\n", s);
	printf("%s\n", t);
}