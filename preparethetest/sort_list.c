#include <stdlib.h>

typedef struct  s_list
{
	struct s_list *next;
	int data;
} t_list;

int ascending (int a, int b)
{
	return (a <= b);
}

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	int swap;
	t_list *tmp;

	tmp = lst;
	while (lst->next != 0)
	{
		if((*cmp)(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else 
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
#include <stdio.h>
int main()
{	
	t_list *begin;
	t_list *node1;
	t_list *node2;
	t_list *node3;

	node1 = (t_list *)malloc(sizeof(t_list));
	node2 = (t_list *)malloc(sizeof(t_list));
	node3 = (t_list *)malloc(sizeof(t_list));
		
	begin = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	
	node1->data = 3;
	node2->data = 2;
	node3->data = 3;


	sort_list(begin, ascending);

	printf("1 :%d\n",node1->data);
	printf("2 :%d\n",node2->data);
	printf("3 : %d\n",node3->data);
}
