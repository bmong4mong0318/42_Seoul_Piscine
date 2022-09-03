/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:13:15 by dayun             #+#    #+#             */
/*   Updated: 2022/04/22 21:46:39 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		else if (*s1 == '\0' && *s2 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	char a[10] = "happy";
   	char b[10] = "happy";	
	printf("%d\n", ft_strncmp(a,b,0));

	char c[10] = "happyhappy";
   	char d[10] = "happy";
	printf("%d\n", ft_strncmp(c,d,4));
	
	char e[10] = "happy";
   	char f[10] = "happyhappy";	
	printf("%d\n", ft_strncmp(e,f,6));
}
