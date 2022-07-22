/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwjeo <chanwjeo@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 18:45:16 by chanwjeo          #+#    #+#             */
/*   Updated: 2022/05/01 23:13:55 by chanwjeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_strlen(char *str)
{
	int	ret;

	ret = 0;
	while (str[ret])
		ret++;
	return (ret);
}

int	ft_atoi(char *str)
{
	int		result;

	result = 0;
	while (*str >= 48 && *str <= 57)
	{
		result = (*str - '0') + result * 10;
		str++;
	}
	return (result);
}

char	*ft_strndup(char *src, int n)
{
	int		len;
	char	*new_str;

	len = 0;
	while (src[len] && len < n)
		len++;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (0);
	new_str[len] = 0;
	while (len-- > 0)
		new_str[len] = src[len];
	return (new_str);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*new_str;

	len = 0;
	while (src[len])
		len++;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (0);
	new_str[len] = 0;
	while (len-- >= 0)
		new_str[len] = src[len];
	return (new_str);
}

int	is_valid_argu(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{	
			write(1, "error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}
