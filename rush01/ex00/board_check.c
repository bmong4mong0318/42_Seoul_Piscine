/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euiclee <euiclee@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:57:21 by euiclee           #+#    #+#             */
/*   Updated: 2022/04/26 08:53:19 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	up_check(int board[4][4], int *up)
{
	int	i;
	int	j;
	int	count;
	int	max;

	i = 0;
	while (i < 4)
	{
		j = 0;
		count = 0;
		max = 0;
		while (j < 4)
		{
			if (max < board[j][i])
			{
				max = board[j][i];
				count++;
			}
			j++;
		}
		if (count != up[i])
			return (0);
		i++;
	}
	return (1);
}

int	down_check(int board[4][4], int *down)
{
	int	i;
	int	j;
	int	count;
	int	max;

	i = 0;
	while (i < 4)
	{
		j = 3;
		count = 0;
		max = 0;
		while (j >= 0)
		{
			if (max < board[j][i])
			{
				max = board[j][i];
				count++;
			}
			j--;
		}
		if (count != down[i])
			return (0);
		i++;
	}
	return (1);
}

int	left_check(int board[4][4], int *left)
{
	int	i;
	int	j;
	int	count;
	int	max;

	i = 0;
	while (i < 4)
	{
		j = 0;
		count = 0;
		max = 0;
		while (j < 4)
		{
			if (max < board[i][j])
			{
				max = board[i][j];
				count++;
			}
			j++;
		}
		if (count != left[i])
			return (0);
		i++;
	}
	return (1);
}

int	right_check(int board[4][4], int *right)
{
	int	i;
	int	j;
	int	count;
	int	max;

	i = 0;
	while (i < 4)
	{
		j = 3;
		count = 0;
		max = 0;
		while (j >= 0)
		{
			if (max < board[i][j])
			{
				max = board[i][j];
				count++;
			}
			j--;
		}
		if (count != right[i])
			return (0);
		i++;
	}
	return (1);
}

int	board_check(int board[4][4], int view[16])
{
	if (up_check(board, &view[0]) == 0)
		return (0);
	if (down_check(board, &view[4]) == 0)
		return (0);
	if (left_check(board, &view[8]) == 0)
		return (0);
	if (right_check(board, &view[12]) == 0)
		return (0);
	return (1);
}
