/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <dayun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:18:54 by dayun             #+#    #+#             */
/*   Updated: 2022/04/26 09:22:16 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	board_init(int board[4][4]);
int		is_board_fill(int board[4][4], int row, int column, int view[16]);
void	board_print(int board[4][4]);

int	is_input_check(char *str, int *view)
{
	int	i;
	int	v;

	i = 0;
	v = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (v == 16)
				return (1);
			if (!(str[i] >= '1' && str[i] <= '4'))
				return (1);
			view[v] = str[i] - '0';
			v++;
		}
		else if (str[i] != ' ')
			return (1);
		i++;
	}
	if (!(v == 16 && i == 31))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	board[4][4];
	int	view[16];

	if (argc != 2 || is_input_check(argv[1], view))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	board_init(board);
	if (is_board_fill(board, 0, 0, view))
		board_print(board);
	else
		write(1, "Error\n", 6);
	return (0);
}
