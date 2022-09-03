/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:13:55 by dayun             #+#    #+#             */
/*   Updated: 2022/05/02 09:29:53 by dayun            ###   ########.fr       */
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

void	ft_strcpy(char *dest, char *src, char *sep)
{
	while (*src)
		*dest++ = *src++;
	while (*sep)
		*dest++ = *sep++;
	if (!*sep)
		*dest = 0;
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	total_len = 0;
	i = -1;
	while (++i < size)
		total_len += ft_strlen(strs[i]);
	total_len += ft_strlen(sep) * (size - 1);
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{	
	int		i;
	int		total_len;
	char	*final_str;
	char	*temp;

	total_len = ft_total_len(size, strs, sep);
	if (size <= 0)
	{
		final_str = (char *)malloc(sizeof(char));
		final_str[0] = 0;
		return (final_str);
	}
	final_str = (char *)malloc(sizeof(char) * total_len + 1);
	if (final_str == 0)
		return (0);
	i = -1;
	temp = final_str;
	while (++i < size - 1)
	{
		ft_strcpy(temp, strs[i], sep);
		temp += ft_strlen(strs[i]) + ft_strlen(sep);
	}
	ft_strcpy(temp, strs[size - 1], "\0");
	return (final_str);
}
/*
#include <stdio.h>
int	main()
{
  printf("-------ex03-------\n\n");
    char *ex03_arr1;
    char *ex03_arr2;
    char *ex03_arr3;
	char *ex03_str[5];

	ex03_str[0] = "hello";
	ex03_str[1] = "my";
	ex03_str[2] = "name";
	ex03_str[3] = "is";
	ex03_str[4] = "hunpark!";
	ex03_arr1 = ft_strjoin(5, ex03_str, "");
    ex03_arr2 = ft_strjoin(5, ex03_str, ".");
    ex03_arr3 = ft_strjoin(5, ex03_str, "-");
	printf("%s\n", ex03_arr1);
    printf("%s\n", ex03_arr2);
    printf("%s\n\n", ex03_arr3);
    free(ex03_arr1);
    free(ex03_arr2);
    free(ex03_arr3);
}*/
