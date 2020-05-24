#include<stdio.h>

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		return 1;
	}
	//���ļ�ֱ���˳�
	FILE* file = fopen(argv[1], "r");
	if (file == NULL)
	{
		return 1;
	}
	//�޷���λ��8��1�ſ�����ff
	unsigned char bytes[3];
	fread(bytes, 3, 1, file);    //д��bytes���飬��file��ȡ����3���ֽ�

	if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
	{
		printf("Maybe is a jpeg\n");
	}
	else
	{
		printf("No\n");
	}
}