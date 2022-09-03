/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 10:29:26 by dayun             #+#    #+#             */
/*   Updated: 2022/04/28 23:30:30 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 0;
	while (str[i])
	{
		if ((check(str[i]) == 0) && ((str[i + 1] >= 'a' && str[i + 1] <= 'z')))
			str[i + 1] -= 32;
			i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char a[] = "salut,\ncomMent tu vas ? 42MotS quArante-deux; cinquante+et+un";
	printf("%s",ft_strcapitalize(a));
}*/
