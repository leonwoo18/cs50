//malloc 一个数组,  用realloc搬运
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int* list = malloc(3 * sizeof(int));
	if (list == NULL)
	{
		return 1;
	}
	list[0] = 1;
	list[1] = 2;
	list[2] = 3;
//用reallco分配并搬运
	int* tmp = realloc(list,4 * sizeof(int));   //tmp指针是个打工仔，直到搬运完，才没有tmp什么事了
	if (tmp == NULL)
	{
		return 1;
	}

	tmp[3] = 4;        //搬运完事了，已经没有tmp指针什么事了
	free(list);
	list = tmp;         //把tmp存储的16位进制地址数，赋值给list指针。tmp退出舞台
	//打印
	for (int i = 0; i < 4; i++)
	{
		printf("%i\n", list[i]);
	}
}