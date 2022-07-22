/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:01:10 by dayun             #+#    #+#             */
/*   Updated: 2022/04/16 20:04:14 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/*
int main()
{
	ft_putnbr(42);
	ft_putnbr(-4324);
	ft_putnbr(-214783648);
	ft_putnbr(0);
}*/
