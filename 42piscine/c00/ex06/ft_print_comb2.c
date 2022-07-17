/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:54:01 by dayun             #+#    #+#             */
/*   Updated: 2022/04/16 20:02:48 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int n)
{
	char	f;
	char	s;

	s = n % 10 + '0';
	f = n / 10 + '0';
	write(1, &f, 1);
	write(1, &s, 1);
}

void	ft_print_comb2(void)
{
	char	n;
	char	m;

	n = 0;
	while (n <= 97)
	{
		m = n + 1;
		while (m <= 99)
		{
			print(n);
			write(1, " ", 1);
			print(m);
			write(1, ", ", 2);
			m++;
		}
		n++;
	}
	write(1, "98 99", 5);
}
/*
int main() 
{
	ft_print_comb2();
}*/
