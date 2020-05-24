#include<stdio.h>

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		return 1;
	}
	//空文件直接退出
	FILE* file = fopen(argv[1], "r");
	if (file == NULL)
	{
		return 1;
	}
	//无符号位，8个1才可以是ff
	unsigned char bytes[3];
	fread(bytes, 3, 1, file);    //写入bytes数组，从file读取，读3个字节

	if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
	{
		printf("Maybe is a jpeg\n");
	}
	else
	{
		printf("No\n");
	}
}