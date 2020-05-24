//比较两个string各自的指针

#include<stdio.h>
#include<cs50.h>

int main(void)
{
	string s = get_string("s: ");
	string t = get_string("t: ");

	if (s == t)
	{
		printf("same\n");
	}
	else
	{
		printf("Different\n");
	}
}