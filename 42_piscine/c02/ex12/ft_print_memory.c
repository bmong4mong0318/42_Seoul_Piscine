/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 08:14:03 by dayun             #+#    #+#             */
/*   Updated: 2022/05/01 00:32:40 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c, int size)
{
	write(1, c, size);
}

void	print_hex(unsigned long long nb, int n)
{
	int		i;
	int		j;
	int		pos;
	char	true_hex[16];

	pos = n - 1;
	i = 0;
	while (i < 16)
	{
		true_hex[i] = '0';
		i++;
	}
	while (nb > 0)
	{
		j = nb % 16;
		nb = nb / 16;
		if (j < 10)
			true_hex[pos] = j + '0';
		else
			true_hex[pos] = 'a' + (j - 10);
		pos--;
	}
	write (1, true_hex, n);
}

void	print_rest(unsigned char *c, int size)
{
	int	i;

	i = -1;
	while (i++ < 16)
	{
		if (i % 2 == 0)
			ft_putchar(" ", 1);
		if (i < size)
			print_hex((unsigned long long)*(c + i), 2);
		else if (i != 16)
			ft_putchar("  ", 2);
	}
	i = -1;
	while (i++ < size - 1)
	{
		if (*(c + i) <= 31 || *(c + i) >= 127)
			ft_putchar(".", 1);
		else
			ft_putchar((char *)(c + i), 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*c;
	unsigned int	sendsize;

	i = 0;
	c = addr;
	while (i * 16 < size)
	{
		if (i < size / 16)
			sendsize = 16;
		else
			sendsize = size % 16;
		print_hex((unsigned long long)(c + (i * 16)), 16);
		ft_putchar(":", 1);
		print_rest(c + (i * 16), sendsize);
		ft_putchar("\n", 1);
		i++;
	}
	return (addr);
}

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void *ft_print_memory(void *addr, unsigned int size);

int main(void)
{

 char string[94] = "Bonjour les aminches*sc**c estfou* tout*ce qu on peut faire avec***print_memory****lol*lol* *";
 
 string[20] = 9;
 string[23] = 10;
 string[24] = 9;
 string[35] = 9;
 string[40] = 9;
 string[65] = 9;
 string[66] = 10;
 string[67] = 9;
 string[80] = 10;
 string[81] = 10;
 string[82] = 10;
 string[83] = 9;
 string[87] = 46;
 string[91] = 10;
 string[93] = 0;
 ft_print_memory(string, sizeof(string));
 printf("Address\n");
 for (int i = 0; i < 6; i++)
 {
  printf("%p\n", string + 16 * i);
 }
}
