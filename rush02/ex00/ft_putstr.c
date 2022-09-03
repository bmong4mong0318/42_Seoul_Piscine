/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwjeo <chanwjeo@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:46:28 by chanwjeo          #+#    #+#             */
/*   Updated: 2022/05/01 21:16:26 by chanwjeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_putstr_ns(char *str)
{
	while (*str == ' ')
		str++;
	while (*str)
		write(1, str++, 1);
}

void	ft_putstr(char *str)
{
	write(1, " ", 1);
	while (*str == ' ')
		str++;
	while (*str)
		write(1, str++, 1);
}

int	num_return(int num)
{
	if (num)
		return (2);
	return (3);
}

void	ft_print_number(char *av1, char *dict[2][101])
{
	int	flag;
	int	i;
	int	len;

	i = 0;
	flag = 0;
	len = ft_strlen(av1);
	if (len == 0)
	{
		ft_print_err(1);
		return ;
	}
	while (i < len)
	{
		if (av1[i] != '0')
			break ;
		i++;
	}
	if ((*av1 == '0' && len == 1))
	{
		ft_putstr_ns(dict[0][0]);
		return ;
	}
	reading_r_no_sp(av1, dict, flag);
	return ;
}

void	ft_print_err(int flag)
{
	if (flag == 1)
		write(1, "error\n", 6);
	else
		write(1, "Dict Error\n", 11);
}
