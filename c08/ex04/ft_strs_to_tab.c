/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:20:56 by dayun             #+#    #+#             */
/*   Updated: 2022/05/02 19:40:40 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*arr;

	i = 0;
	len = ft_strlen(src);
	arr = (char *)malloc(sizeof(char) * len + 1);
	while (src[i])
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{	
	int			i;
	t_stock_str	*answer;

	i = 0;
	answer = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (answer == 0)
		return (0);
	while (i < ac)
	{
		answer[i].size = ft_strlen(av[i]);
		answer[i].str = av[i];
		answer[i].copy = ft_strdup(av[i]);
		i++;
	}
	answer[i].str = 0;
	return (answer);
}
