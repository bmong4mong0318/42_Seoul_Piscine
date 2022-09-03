/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 01:58:21 by dayun             #+#    #+#             */
/*   Updated: 2022/05/02 13:59:58 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	if (c == 0)
		return (0);
	return (0);
}

long long	word_count(char *str, char *charset)
{
	long long	cnt;

	cnt = 0;
	while (*str)
	{
		if (!is_charset(*str, charset) && *str)
			cnt++;
		while (!is_charset(*str, charset) && *str)
				str++;
		while (is_charset(*str, charset) && *str)
				str++;
	}
	return (cnt);
}

void	ft_strcpy(char *dest, char *src, char *end)
{
	while (src < end)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
}

char	**ft_split(char *str, char *charset)
{
	long long	i;
	char		*temp;
	char		**answer;

	i = 0;
	answer = (char **)malloc(sizeof(char *) * word_count(str, charset) + 1);
	if (!answer)
		return (0);
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			temp = str;
			while (!is_charset(*str, charset) && *str)
				str++;
			answer[i] = (char *)malloc(str - temp + 1);
			ft_strcpy(answer[i++], temp, str);
			if (!*str)
				break ;
		}
		str++;
	}
	answer[i] = 0;
	return (answer);
}
