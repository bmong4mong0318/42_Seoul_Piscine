/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:51:56 by dayun             #+#    #+#             */
/*   Updated: 2022/04/26 09:22:35 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	answer;

	i = nb;
	answer = 1;
	if (nb < 0)
		return (0);
	while (i > 0)
	{	
		i--;
		answer = answer * (nb - i);
	}
	return (answer);
}
