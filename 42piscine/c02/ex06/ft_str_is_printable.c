/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 09:39:37 by dayun             #+#    #+#             */
/*   Updated: 2022/04/19 11:20:43 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (str[i])
	{
		a = str[i];
		if (! (a >= 32 && a <= 127))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	char a[10] = "h a p p y";
	printf("%d",ft_str_is_printable(a));
}*/
