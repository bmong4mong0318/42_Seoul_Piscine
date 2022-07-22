/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:36:51 by dayun             #+#    #+#             */
/*   Updated: 2022/05/04 10:20:45 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	jump_space(char *str, int *plma)
{	
	int	i;

	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
		i++;
	}
	while ((*str == '+' || *str == '-'))
	{
		if (*str == '-')
			*plma *= -1;
		str++;
		i++;
	}
	return (i);
}

int	is_same_word(char *c)
{
	int	i;

	while (*c != 0)
	{
		i = 1;
		while (*(c + i))
		{
			if (*c == *(c + i))
				return (0);
			i++;
		}
		c++;
	}
	return (1);
}

int	is_same_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	check_base(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		if (*str == '+' || *str == '-' || is_same_word(str) == 0
			|| (*str >= 9 && *str <= 13) || *str == 32)
			return (0);
		str++;
		len++;
	}
	if (len < 2)
		return (0);
	return (len);
}

int	ft_atoi_base(char *str, char *base)
{
	int	plma;
	int	answer;
	int	real_base;
	int	find;
	int	index;

	real_base = check_base(base);
	if (check_base(base) == 0)
		return (0);
	plma = 1;
	index = jump_space(str, &plma);
	str = str + index;
	answer = 0;
	find = is_same_base(*str, base);
	while (find != -1)
	{
		answer = answer * real_base + find;
		str++;
		find = is_same_base(*str, base);
	}
	return (plma * answer);
}
/*
#include <stdio.h>
int main()
{
	printf("------ ex05 ------\n\n");
	char ex05_str1[] = " \n -+-++-+2147483648";
	char ex05_str2[] = "   ---+AABCDESSEZ";
	char ex05_str3[] = "   ++136667";
	char ex05_str4[] = "   -----+-+!!@@#..<";
	char ex05_str5[] = "  \n \tatoi12-+123base";

	printf("-2147483648\n");
	printf("%d\n\n", ft_atoi_base(ex05_str1, "0123456789"));

	printf("0\n");
	printf("%d\n\n", ft_atoi_base(ex05_str1, ""));

	printf("-67174\n");
	printf("%d\n\n", ft_atoi_base(ex05_str2, "ABCDES"));

	printf("-1\n");
	printf("%d\n\n", ft_atoi_base(ex05_str2, "ABZ"));

	printf("0\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "A-+"));

	printf("12347\n");
	printf("%d\n\n", ft_atoi_base(ex05_str3, "3405816"));

	printf("1126397\n");
	printf("%d\n\n", ft_atoi_base(ex05_str4, "!@#$%^&*()~?><'."));

	printf("27\n");
	printf("%d\n\n", ft_atoi_base(ex05_str5, "atoi"));
}*/
