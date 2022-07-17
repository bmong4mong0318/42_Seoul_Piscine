/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:01:26 by dayun             #+#    #+#             */
/*   Updated: 2022/04/19 20:23:28 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (str[i])
	{
		a = str[i];
		if (! ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_str_is_alpha("happy"));
	printf("%d",ft_str_is_alpha(""));
	printf("%d",ft_str_is_alpha("happy!"));
}*/
