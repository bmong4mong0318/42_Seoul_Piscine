/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:44:06 by dayun             #+#    #+#             */
/*   Updated: 2022/05/03 17:27:19 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calculate.h"

void	add(int a, int b)
{
	ft_putnbr(a + b);
	write(1, "\n", 1);
}

void	sub(int a, int b)
{
	ft_putnbr(a - b);
	write(1, "\n", 1);
}

void	mul(int a, int b)
{
	ft_putnbr(a * b);
	write(1, "\n", 1);
}

void	div(int a, int b)
{
	if (b)
		ft_putnbr(a / b);
	else
		write(1, "Stop : division by zero", 23);
	write(1, "\n", 1);
}

void	mod(int a, int b)
{
	if (b)
		ft_putnbr(a % b);
	else
		write(1, "Stop : modulo by zero", 21);
	write(1, "\n", 1);
}
