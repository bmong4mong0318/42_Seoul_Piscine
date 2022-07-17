/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:39:43 by dayun             #+#    #+#             */
/*   Updated: 2022/05/02 16:02:58 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int	promising(int *arr, int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (arr[i] == arr[x] || (ft_abs(arr[i] - arr[x]) == ft_abs(i - x)))
			return (0);
		i++;
	}
	return (1);
}

void	print_queens(int *arr)
{
	int		i;
	char	str[10];

	i = 0;
	while (i < 10)
	{
		str[i] = arr[i] + '0';
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	the_tenqueens(int *arr, int x, int *cnt)
{
	int	y;

	if (x == 10)
	{
		print_queens(arr);
		*cnt += 1;
	}
	else
	{
		y = 0;
		while (y < 10)
		{
			arr[x] = y;
			if (promising(arr, x))
				the_tenqueens(arr, x + 1, cnt);
			y++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	x;
	int	cnt;
	int	arr[10];

	x = 0;
	cnt = 0;
	the_tenqueens(arr, x, &cnt);
	return (cnt);
}
/*
#include <stdio.h>

int main()
{
	printf("\n----------------------ex08----------------------------\n");
	int result = ft_ten_queens_puzzle();
	printf("\n\n\n\n result ::::: %d\n\n\n\n",result);
}*/
