/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:25:14 by dayun             #+#    #+#             */
/*   Updated: 2022/04/17 15:52:41 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *str, int size)
{
	int		tmp;
	int		i;
	int		n;

	i = size;
	n = size / 2;
	while (n != 0)
	{
		tmp = str[i - 1];
		str[i - 1] = str[size - i];
		str[size - i] = tmp;
		i--;
		n--;
	}
}
/*
#include <stdio.h>
int main()
{
	int a[10] = {1,2,3,4,5};

	ft_rev_int_tab(a,5);
	for(int i = 0; i<5;i++)
		printf("%d", a[i]);
}*/
