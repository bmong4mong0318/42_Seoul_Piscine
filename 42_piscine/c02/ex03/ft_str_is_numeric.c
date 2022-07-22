/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 09:22:11 by dayun             #+#    #+#             */
/*   Updated: 2022/04/21 13:43:40 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (str[i])
	{
		a = str[i];
		if (! (a >= '0' && a <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_str_is_numeric("12345"));
	printf("%d",ft_str_is_numeric(""));
	printf("%d",ft_str_is_numeric("12345!"));
}*/
