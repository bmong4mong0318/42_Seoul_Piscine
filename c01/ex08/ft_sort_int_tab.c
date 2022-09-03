/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 20:43:00 by dayun             #+#    #+#             */
/*   Updated: 2022/04/17 15:53:16 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		tmp;
	int		idx1;
	int		idx2;

	idx1 = 0;
	while (idx1 < size)
	{
		idx2 = idx1 + 1;
		while (idx2 < size)
		{
			if (tab[idx1] > tab[idx2])
			{
				tmp = tab[idx1];
				tab[idx1] = tab[idx2];
				tab[idx2] = tmp;
			}
			idx2++;
		}
		idx1++;
	}
}
/*
#include <stdio.h>
int main()
{
	int a[5] = {4,0,1,3,2};
	ft_sort_int_tab(a, 5);
	
	int i;
	for(i = 0; i<5; i++)
		printf("%d",a[i]);
}*/
