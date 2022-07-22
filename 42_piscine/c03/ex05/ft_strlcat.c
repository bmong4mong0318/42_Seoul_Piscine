/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:13:36 by dayun             #+#    #+#             */
/*   Updated: 2022/04/26 15:32:27 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	j = 0;
	dlen = length(dest);
	slen = length(src);
	if (dlen < size)
	{	
		i = dlen;
		while (src[j] != '\0' && j < size - dlen - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	else
		return (slen + size);
	return (dlen + slen);
}


#include <stdio.h>
int main()
{
	char a[30] = "happy";
	char b[10] = "apple";

	printf("%d", ft_strlcat(a,b,7));
	printf("%s", a);
}
