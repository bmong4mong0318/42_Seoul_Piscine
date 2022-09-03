/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:33:23 by dayun             #+#    #+#             */
/*   Updated: 2022/05/02 15:23:33 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	plma;
	int	answer;

	plma = 1;
	while (is_space(*str) == 1)
		str++;
	while ((*str == '+' || *str == '-'))
	{
		if (*str == '-')
			plma *= -1;
		str++;
	}
	answer = 0;
	while (*str >= '0' && *str <= '9')
	{	
		answer *= 10;
		answer += (*str - '0');
		str++;
	}
	return (plma * answer);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ex03_str1[] ="\t   ----++000846545ags56";
	char ex03_str2[] = "  	 \t	-+--1165ataat++-156";
	char ex03_str3[] = "214564564512313546";
	printf("str1 : %s\nft_atoi(str1) = %d\n\n", ex03_str1, ft_atoi(ex03_str1));
	printf("str2 : %s\nft_atoi(str2) = %d\n\n", ex03_str2, ft_atoi(ex03_str2));
	printf("str3 : %s\nft_atoi(str3) = %d\n\n", ex03_str3, ft_atoi(ex03_str3));
}*/
