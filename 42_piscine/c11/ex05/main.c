/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:26:32 by dayun             #+#    #+#             */
/*   Updated: 2022/05/03 17:44:18 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calculate.h"

void	do_op(int a, int b, char c, void (*f[5])(int, int))
{
	if (c == '+')
		f[0](a, b);
	else if (c == '-')
		f[1](a, b);
	else if (c == '*')
		f[2](a, b);
	else if (c == '/')
		f[3](a, b);
	else if (c == '%')
		f[4](a, b);
	else
		write (1, "0\n", 2);
}

int	main(int ac, char *av[])
{
	int		n1;
	int		n2;
	void	(*f[5])(int, int);

	f[0] = add;
	f[1] = sub;
	f[2] = mul;
	f[3] = div;
	f[4] = mod;
	n1 = ft_atoi(av[1]);
	n2 = ft_atoi(av[3]);
	if (ac == 4)
	{
		if (av[2][1] != '\0')
		{
			write(1, "0\n", 2);
			return (0);
		}
		do_op(n1, n2, av[2][0], f);
	}
	return (0);
}
