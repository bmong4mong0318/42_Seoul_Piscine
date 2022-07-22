/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghwk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:58:25 by seonghwk          #+#    #+#             */
/*   Updated: 2022/04/18 15:23:20 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	four_corners(int j, int i)
{
	if (i == 1 && j == 1)
		ft_putchar('o');
	else if (i != 1 && j == 1)
		ft_putchar('o');
	else if (i == 1 && j != 1)
		ft_putchar('o');
	else
		ft_putchar('o');
}

void	rush(int y, int x)
{
	int		i;	
	int		j;	

	i = 1;
	j = 1;
	while (i <= x)
	{
		while (j <= y)
		{
			if ((i == 1 || i == x) && (j == 1 || j == y))
				four_corners(i, j);
			if ((i > 1 && i < x) && (j == 1 || j == y))
				ft_putchar('|');
			if ((i == 1 || i == x) && (j > 1 && j < y))
				ft_putchar('-');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 1;
		i++;
	}
}
