#include<stdio.h>
#include<stdlib.h>

//typedefһ��node �ṹ
typedef struct node
{
	int number;
	struct node* next;
} 
node;

int main(void)
{
	node* list = NULL;
//��һ�����
	node* n = malloc(sizeof(node));
	if (n == NULL)
	{
		return 1;
	}
	n->number = 1;
	n->next = NULL;
	list = n;
//�ڶ������
	n = malloc(sizeof(node));
	if (n == NULL)
	{
		return 1;
	}
	n->number = 2;
	n->next = NULL;
	list->next = n;
//���������
	n = malloc(sizeof(node));
	if (n == NULL)
	{
		return 1;
	}
	n->number = 3;
	n->next = NULL;
	list->next->next = n;

//��ӡ����
	for (node* tmp = list; tmp != NULL; tmp = tmp->next)
	{
		print("%i\n", tmp->number);
	}
//�ͷ��ڴ�
	while (list != NULL)
	{
	    node *tmp = list->next;
		free(list);
		list = tmp;
	}
}