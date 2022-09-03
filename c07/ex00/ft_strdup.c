/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:55:42 by dayun             #+#    #+#             */
/*   Updated: 2022/05/02 09:30:06 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*arr;

	i = 0;
	len = ft_strlen(src);
	arr = (char *)malloc(sizeof(char) * len + 1);
	while (src[i])
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
/*
#include <stdio.h>
int main()
{
    printf("-------ex00-------\n\n");
    char ex00_src[] = "hello my name is hunpark!";
    printf("src : %s\n", ex00_src);
    printf("strdup : %s\n\n", ft_strdup(ex00_src));
    free(ft_strdup(ex00_src));
}*/
