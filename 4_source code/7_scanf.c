// scanf(用户输入的数字，存放用户输入的数据的内存数据块的地址)
#include<stdio.h>

int main(void)
{
	char s[5];
	printf("s: ");
	scanf("%s", s);
	printf("s: %s\n", s);
}