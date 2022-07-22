/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:59:50 by dayun             #+#    #+#             */
/*   Updated: 2022/05/04 10:29:09 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		jump_space(char *str, long *plma);
int		is_same_word(char *c);
int		is_same_base(char c, char *base);
int		check_base(char *str);
long	ft_atoi_base(char *str, char *base);

int	n_size(long nbr, int base_len)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		i++;
	while (nbr)
	{
		nbr /= base_len;
		i++;
	}
	return (i);
}

char	*ft_putnbr_base(long nbr, char *base_to)
{
	int		size;
	char	*answer;
	int		base_len;

	base_len = check_base(base_to);
	size = n_size(nbr, base_len);
	answer = (char *)malloc(sizeof(char) * size + 1);
	if (nbr < 0)
		answer[0] = '-';
	if (!nbr)
		answer[0] = base_to[0];
	answer[size] = 0;
	if (nbr < 0)
		nbr *= -1;
	while (nbr)
	{
		answer[size - 1] = base_to[nbr % base_len];
		nbr /= base_len;
		size--;
	}	
	return (answer);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!check_base(base_from) || !check_base(base_to))
		return (0);
	return (ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to));
}
/*
#include <stdio.h>
int main()
{
	printf("-------ex04-------\n\n");
	char *str;
	str = ft_convert_base("15858", "012345678", "0123456789ABCDEF");
	printf("2A9B : %s\n", str);
	free(str);
	str = ft_convert_base("  \t \n -+-+-28909abc", "0123456789abcdef", 
	"0123456789ABCDEFGHIJ");
	printf("-ACDADBG : %s\n", str);
	free(str);
	str = ft_convert_base(" --zzixzoz", "ozix", "POIUYTREWQ");
	printf("TWYO : %s\n", str);
	free(str);
	char base[6] = {-19, 66, -1, -8, -20, 0};
	str = ft_convert_base("++858a112", "845a", base);
	printf("B?? : %s\n", str);
	free(str);
	str = ft_convert_base("15858", "01234aa5678", "012345679ABCDEF");
	printf("null : %s\n", str);
	free(str);
	str = ft_convert_base("15858", "01278", "0");
	printf("null : %s\n", str);
	free(str);
	str = ft_convert_base("15858", "01-278", "019ABCDEF");
	printf("null : %s\n\n", str);
	free(str);
}*/
