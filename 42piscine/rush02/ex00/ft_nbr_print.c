/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwjeo <chanwjeo@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:21:13 by chanwjeo          #+#    #+#             */
/*   Updated: 2022/05/01 23:39:00 by chanwjeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_large_nbr_1(char *nbr, char *dict[2][101], int flag)
{
	char	*block;
	int		len;

	len = ft_strlen(nbr);
	block = 0;
	if (len % 3 == 1)
	{
		ft_large_nbr_2(nbr, dict, flag, len);
		return ;
	}
	else if (len % 3 == 0)
		block = ft_strndup(nbr, 3);
	else
		block = ft_strndup(nbr, 2);
	len -= num_return(len % 3);
	nbr += num_return(len % 3);
	if (flag == 0)
		reading_r_no_sp(block, dict, flag);
	else
		reading_r(block, dict, flag);
	free(block);
	flag = 1;
	ft_putstr(dict[1][len / 3 - 1]);
	reading_r(nbr, dict, flag);
}

void	ft_large_nbr_2(char *nbr, char *dict[2][101], int flag, int len)
{
	if (flag == 0)
		ft_putstr_ns(dict[0][nbr[0] - '0']);
	else
		ft_putstr(dict[0][nbr[0] - '0']);
	ft_putstr(dict[1][(len - 1) / 3 - 1]);
	reading_r(nbr + 1, dict, flag);
}

void	reading_r(char *nbr, char *dict[2][101], int flag)
{
	if (*nbr == '0' || (*nbr >= 9 && *nbr <= 13) || *nbr == 32)
	{
		if (*(nbr + 1) != '\0')
			reading_r(nbr + 1, dict, flag);
	}
	else if (ft_strlen(nbr) == 1)
		ft_putstr_ns(dict[0][ft_atoi(nbr)]);
	else if (ft_strlen(nbr) == 2 && nbr[0] == '1')
		ft_putstr(dict[0][ft_atoi(nbr)]);
	else if (ft_strlen(nbr) == 2)
	{
		ft_putstr(dict[0][(nbr[0] - '0') * 10]);
		if (nbr[1] && nbr[1] != '0')
			write(1, " ", 1);
		reading_r(nbr + 1, dict, flag);
	}
	else if (ft_strlen(nbr) == 3)
	{
		ft_putstr(dict[0][nbr[0] - '0']);
		ft_putstr(dict[0][100]);
		reading_r(nbr + 1, dict, flag);
	}
	else
		ft_large_nbr_1(nbr, dict, flag);
}

void	reading_r_no_sp(char *nbr, char *dict[2][101], int flag)
{
	if (*nbr == '0' || (*nbr >= 9 && *nbr <= 13) || *nbr == 32)
	{
		if (*(nbr + 1) != '\0')
			reading_r(nbr + 1, dict, flag);
	}
	else if (ft_strlen(nbr) == 1)
		ft_putstr_ns(dict[0][ft_atoi(nbr)]);
	else if (ft_strlen(nbr) == 2 && nbr[0] == '1')
		ft_putstr_ns(dict[0][ft_atoi(nbr)]);
	else if (ft_strlen(nbr) == 2)
	{
		ft_putstr_ns(dict[0][(nbr[0] - '0') * 10]);
		if (nbr[1] && nbr[1] != '0')
			write(1, " ", 1);
		reading_r(nbr + 1, dict, flag);
	}
	else if (ft_strlen(nbr) == 3)
	{
		ft_putstr_ns(dict[0][nbr[0] - '0']);
		ft_putstr(dict[0][100]);
		reading_r(nbr + 1, dict, flag);
	}
	else
		ft_large_nbr_1(nbr, dict, flag);
}
