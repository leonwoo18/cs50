//malloc һ������,  ��realloc����
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
//��reallco���䲢����
	int* tmp = realloc(list,4 * sizeof(int));   //tmpָ���Ǹ����У�ֱ�������꣬��û��tmpʲô����
	if (tmp == NULL)
	{
		return 1;
	}

	tmp[3] = 4;        //���������ˣ��Ѿ�û��tmpָ��ʲô����
	free(list);
	list = tmp;         //��tmp�洢��16λ���Ƶ�ַ������ֵ��listָ�롣tmp�˳���̨
	//��ӡ
	for (int i = 0; i < 4; i++)
	{
		printf("%i\n", list[i]);
	}
}