/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:10:59 by dayun             #+#    #+#             */
/*   Updated: 2022/05/03 17:44:07 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (length == 0)
		return (1);
	while (i < length - 1 && f(tab[i], tab[i + 1]) >= 0)
		i++;
	while (j < length - 1 && f(tab[j], tab[j + 1]) <= 0)
		j++;
	if (i == length - 1 || j == length - 1)
		return (1);
	else
		return (0);
}
