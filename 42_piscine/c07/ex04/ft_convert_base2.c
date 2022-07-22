/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:51:56 by dayun             #+#    #+#             */
/*   Updated: 2022/04/28 20:22:02 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	jump_space(char *str, int	*plma)
{
	int	i;

	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
		i++;
	}
	while ((*str == '+' || *str == '-'))
	{
		if (*str == '-')
			*plma *= -1;
		str++;
		i++;
	}
	return (i);
}

int	is_same_word(char *c)
{
	int	i;

	while (*c != 0)
	{
		i = 1;
		while (*(c + i))
		{
			if (*c == *(c + i))
				return (0);
			i++;
		}
		c++;
	}
	return (1);
}

int	is_same_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	check_base(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		if (*str == '+' || *str == '-' || is_same_word(str) == 0
			|| (*str >= 9 && *str <= 13) || *str == 32)
			return (0);
		str++;
		len++;
	}
	if (len < 2)
		return (0);
	return (len);
}

long	ft_atoi_base(char *str, char *base)
{
	int		plma;
	long	answer;
	int		real_base;
	int		find;
	int		index;

	real_base = check_base(base);
	if (check_base(base) == 0)
		return (0);
	plma = 1;
	index = jump_space(str, &plma);
	str = str + index;
	answer = 0;
	find = is_same_base(*str, base);
	while (find != -1)
	{
		answer = answer * real_base + find;
		str++;
		find = is_same_base(*str, base);
	}
	return (plma * answer);
}
