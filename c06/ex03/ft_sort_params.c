/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:30:36 by dayun             #+#    #+#             */
/*   Updated: 2022/05/02 11:47:54 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_str(char *str[], int size)
{
	char	*tmp;
	int		idx1;
	int		idx2;

	idx1 = 0;
	while (idx1 < size - 1)
	{
		idx2 = idx1 + 1;
		while (idx2 < size)
		{
			if (ft_strcmp(str[idx1], str[idx2]) > 0)
			{
				tmp = str[idx1];
				str[idx1] = str[idx2];
				str[idx2] = tmp;
			}
			idx2++;
		}
		idx1++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_sort_str(argv + 1, argc - 1);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
