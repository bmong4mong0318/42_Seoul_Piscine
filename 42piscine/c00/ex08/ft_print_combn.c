/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <dayun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:42:35 by dayun             #+#    #+#             */
/*   Updated: 2022/04/17 20:28:15 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static char		g_print[1];
static int		g_number[11];

void	output(int nb)
{
	int	i;

	g_print[0] = ',';
	write(1, g_print, 1);
	g_print[0] = ' ';
	write(1, g_print, 1);
	i = 1;
	while (i <= nb)
	{
		g_print[0] = g_number[i] + '0';
		write(1, g_print, 1);
		i++;
	}
}

void	next(int nb)
{
	int	i;
	int	max;

	i = nb;
	max = 9;
	while (g_number[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	g_number[i] += 1;
	while (i <= nb)
	{
		g_number[i + 1] = g_number[i] + 1;
		i += 1;
	}
}

void	first_output(int nb)
{	
	int	i;

	i = 1;
	while (i <= nb)
	{
		g_number[i] = i - 1;
		i++;
	}
	i = 1;
	while (i <= nb)
	{
		g_print[0] = g_number[i] + '0';
		write(1, g_print, 1);
		i++;
	}
}

void	ft_print_combn(int nb)
{
	first_output(nb);
	while (g_number[1] != 10 - nb)
	{
		if (g_number[nb] != 9)
		{
			g_number[nb] += 1;
		}
		else
		{
			next(nb);
		}
		output(nb);
	}
}
/*
int main()
{
	ft_print_combn(4);
}*/
