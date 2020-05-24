//两个数组同步一个变量i
#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
	string names[4] = { "EMMA","RODRIGO","BRIAN","DAVID" };
	string numbers[4] = { "615-555-0100","617-555-0101","617-555-0102","617-555-0102" };

	for (int i = 0; i < 4; i++)
	{
		if (strcmp(names[i], "EMMA") == 0)
		{
			printf("%s\n", numbers[i]);
		}
	}
}