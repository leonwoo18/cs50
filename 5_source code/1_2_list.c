//malloc һ������,���Ұ���
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

	int* tmp = malloc(4 * sizeof(int));   //tmpָ���Ǹ����У�ֱ�������꣬��û��tmpʲô����
	if (tmp == NULL)
	{
		return 1;
	}
	//����
	for (int i = 0; i < 3; i++)
	{
		tmp[i] = list[i];
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