/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:28:41 by dayun             #+#    #+#             */
/*   Updated: 2022/04/26 09:27:32 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	i;
	long long	tmp;

	i = 2;
	tmp = nb;
	if (tmp < 2)
		return (0);
	while (i * i <= tmp)
	{
		if (tmp % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (ft_is_prime(nb))
		return (nb);
	else
	{
		while (!ft_is_prime(nb + i))
			i++;
		return (nb + i);
	}
}
