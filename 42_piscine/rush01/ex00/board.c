/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:00:02 by cheseo            #+#    #+#             */
/*   Updated: 2022/04/26 08:01:57 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	board_check(int board[4][4], int view[16]);

void	board_init(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	is_board_check_duplicate(int board[4][4], int row, int column, int value)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < column)
	{
		if (board[row][i] == value)
			return (1);
		i++;
	}
	while (j < row)
	{
		if (board[j][column] == value)
			return (1);
		j++;
	}
	return (0);
}

int	is_board_fill(int board[4][4], int row, int column, int view[16])
{
	int	value;

	if (row == 4)
	{
		if (board_check(board, view))
			return (1);
		return (0);
	}
	else if (column == 4)
		return (is_board_fill(board, row + 1, 0, view));
	else
	{
		value = 1;
		while (value < 5)
		{
			board[row][column] = value;
			if (!is_board_check_duplicate(board, row, column, value))
				if (is_board_fill(board, row, column + 1, view))
					return (1);
			value++;
		}
	}
	return (0);
}

void	board_print(int board[4][4])
{
	int		i;
	int		j;
	char	n;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			n = board[i][j] + '0';
			write(1, &n, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
