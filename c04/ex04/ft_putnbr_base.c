/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:29:32 by dayun             #+#    #+#             */
/*   Updated: 2022/04/30 23:59:46 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long long	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
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

int	check_base(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || is_same_word(str) == 0)
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	else
		return (1);
}

void	ft_write_number(long long number, long long base, char *basearr)
{
	long long	arr[50];
	int			i;
	int			cnt;
	long long	final;

	cnt = 0;
	i = 0;
	while (number > 0)
	{
		arr[49 - i] = number % base;
		number /= base;
		i++;
		cnt++;
	}
	i = 0;
	final = 0;
	while (i < cnt)
	{
		final = arr[50 - cnt + i];
		write(1, &basearr[final], 1);
		i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	tmp;
	int			real_base;

	tmp = nbr;
	real_base = ft_len(base);
	if (check_base(base) == 0)
		return ;
	if (tmp == 0)
		write(1, "0", 1);
	if (tmp < 0)
	{	
		write(1, "-", 1);
		ft_write_number(-tmp, real_base, base);
	}
	else
		ft_write_number(tmp, real_base, base);
}

#include <stdio.h>
int main()
{
	printf("-bmLbpjci\n");
	ft_putnbr_base(-2147483648, "abcdEFGhijkLNmopqrST");
	printf("\n\n");

	printf("*///////\n");      
	ft_putnbr_base(0, "!@#$%^&*()<>,.?/");
	printf("\n\n");

	printf("-)()()(\n");
	ft_putnbr_base(-42, "()");
	printf("\n\n");

	printf("[SHOULD NOT PRINT]\n");
	ft_putnbr_base(133316, "");
	printf("\n\n");

	printf("[SHOULD NOT PRINT]\n");
	ft_putnbr_base(15361, "aabc!");
	printf("\n\n");

	printf("59483\n");
	ft_putnbr_base(59483, "01234567891");
	printf("\n\n");

	ft_putnbr_base(0, "0123456789");

} 
