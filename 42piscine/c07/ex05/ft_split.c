/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:39:35 by dayun             #+#    #+#             */
/*   Updated: 2022/05/02 19:35:16 by dayun            ###   ########.fr       */
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
/*
#include <stdio.h>
int	main()
{
    printf("-------ex05-------\n\n");
    char **ex05_split1;
    char **ex05_split2;
    char **ex05_split3;
	char *ex05_str1 = "hello my name is hunpark!";
	char *ex05_str2 = "good@day!cat#dog!vim12!";
	char *ex05_str3 = "i1my2me3mine4you5your6you7yours";

	ex05_split1 = ft_split(ex05_str1, " ");
    ex05_split2 = ft_split(ex05_str2, "@!#");
    ex05_split3 = ft_split(ex05_str3, "1234567");
    printf("---test1---\n");
	for (int j = 0; j < 5; j++)
	{
		printf("%s\n", ex05_split1[j]);
	}
    printf("\n\n");
    printf("---test2---\n");
    for (int j = 0; j < 5; j++)
	{
		printf("%s\n", ex05_split2[j]);
	}
    printf("\n\n");
    printf("---test3---\n");
    for (int j = 0; j < 8; j++)
	{
		printf("%s\n", ex05_split3[j]);
	}
    printf("\n\n");
	free(ex05_split1);
    free(ex05_split3);
    free(ex05_split2);
}*/
