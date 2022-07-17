/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 09:22:54 by dayun             #+#    #+#             */
/*   Updated: 2022/05/04 17:23:49 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*answer;

	i = 0;
	answer = (int *)malloc(sizeof(int) * length);
	if (answer == 0)
		return (0);
	while (i < length)
	{
		answer[i] = f(tab[i]);
		i++;
	}
	return (answer);
}
