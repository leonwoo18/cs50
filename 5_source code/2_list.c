#include<stdio.h>
#include<stdlib.h>

//typedef一个node 结构
typedef struct node
{
	int number;
	struct node* next;
} 
node;

int main(void)
{
	node* list = NULL;
//第一个结点
	node* n = malloc(sizeof(node));
	if (n == NULL)
	{
		return 1;
	}
	n->number = 1;
	n->next = NULL;
	list = n;
//第二个结点
	n = malloc(sizeof(node));
	if (n == NULL)
	{
		return 1;
	}
	n->number = 2;
	n->next = NULL;
	list->next = n;
//第三个结点
	n = malloc(sizeof(node));
	if (n == NULL)
	{
		return 1;
	}
	n->number = 3;
	n->next = NULL;
	list->next->next = n;

//打印出来
	for (node* tmp = list; tmp != NULL; tmp = tmp->next)
	{
		print("%i\n", tmp->number);
	}
//释放内存
	while (list != NULL)
	{
	    node *tmp = list->next;
		free(list);
		list = tmp;
	}
}