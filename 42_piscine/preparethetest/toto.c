void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *lst;
	t_list *tmp;
	int i = 0;

	

	if(begin_list == NULL  || *begin_list == NULL)
		return ;



	tmp = *begin_list;
	while ((*cmp)((*begin_list)->data, data_ref) == 0)
	{
		tmp = (*begin_lst)->next;
		free(*begin_list);
		*begin_list = tmp;
	}


	tmp = *begin_lst;
	lst = *begin_lst;
	while (lst != NULL)
	{
		if ((*cmp)(lst->data, data_ref) == 0)
		{
			tmp = lst->next;
			free(lst);
			lst = tmp; 
			i= 0;
		}
		if (i > 0)	
			tmp = tmp->next;
		if (lst != NULL)
			lst = lst->next;
		i++;
	}
}
