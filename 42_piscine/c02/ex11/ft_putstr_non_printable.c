/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:26:58 by dayun             #+#    #+#             */
/*   Updated: 2022/04/28 23:31:03 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex(unsigned char a)
{
	char	*hex;
	int		div;
	int		mod;

	hex = "0123456789abcdef";
	div = a / 16;
	mod = a % 16;
	write (1, &hex[div], 1);
	write (1, &hex[mod], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] >= 127)
		{
			write (1, "\\", 1);
			hex(str[i]);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	char a[3] = {-122, -2, 32};
	ft_putstr_non_printable(a);
}*/
