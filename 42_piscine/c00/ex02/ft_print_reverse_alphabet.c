/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:44:22 by dayun             #+#    #+#             */
/*   Updated: 2022/04/16 20:22:36 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	a;

	i = 26;
	a = 'z';
	while (i > 0)
	{
		write(1, &a, 1);
		a--;
		i--;
	}
}
/*
int main()
{
	ft_print_reverse_alphabet();
}*/
