/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:56:56 by dayun             #+#    #+#             */
/*   Updated: 2022/04/22 21:52:31 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	length(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	check(char *a, char *b)
{
	int	i;

	i = 0;
	while (i < length(b))
	{
		if (a[i] != b[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] == to_find[0] && check((str + i), to_find) == 1)
			return (str + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char a[] = "fasrehappybsdfbh";
	char b[6] = "happy";

	printf("%s", ft_strstr(a,b));	
}*/
