/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:23:54 by dayun             #+#    #+#             */
/*   Updated: 2022/05/03 17:20:43 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "calculate.h"

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	plma;
	int	answer;

	plma = 1;
	while (is_space(*str) == 1)
		str++;
	while ((*str == '+' || *str == '-'))
	{
		if (*str == '-')
			plma *= -1;
		str++;
	}
	answer = 0;
	while (*str >= '0' && *str <= '9')
	{
		answer *= 10;
		answer += (*str - '0');
		str++;
	}
	return (plma * answer);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	digit(int nb)
{
	int		n;

	n = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		n++;
	}
	return (n);
}

void	ft_putnbr(int nb)
{
	int		i;
	int		i_memo;
	char	a[10];

	i = digit(nb);
	i_memo = i;
	if (nb == 0)
		write (1, "0", 1);
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb >= 0)
	{
		while (i > 0)
		{
			a[(i--) - 1] = nb % 10 + '0';
			nb /= 10;
		}
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		ft_putnbr(-nb);
		return ;
	}
	write (1, a, i_memo);
}
