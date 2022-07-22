/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:09:17 by dayun             #+#    #+#             */
/*   Updated: 2022/04/26 09:22:56 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	answer;

	i = power;
	answer = 1;
	if (i < 0)
		return (0);
	while (i > 0)
	{
		answer = answer * nb;
		i--;
	}
	return (answer);
}
