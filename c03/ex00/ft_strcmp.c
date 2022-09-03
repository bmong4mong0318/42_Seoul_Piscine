/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:11:02 by dayun             #+#    #+#             */
/*   Updated: 2022/04/22 21:44:06 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include <stdio.h>
int main()
{
	char a[10] = "happA";
   	char b[10] = "happZ";	
	printf("%d\n", ft_strcmp(a,b));

	char c[10] = "happyhappy";
   	char d[10] = "happy";
	printf("%d\n", ft_strcmp(c,d));
	
	char e[10] = "happy";
   	char f[10] = "happyhappy";	
	printf("%d\n", ft_strcmp(e,f));
}
