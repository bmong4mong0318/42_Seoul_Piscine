/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 21:21:37 by dayun             #+#    #+#             */
/*   Updated: 2022/05/02 09:30:26 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*dest;

	i = 0;
	dest = (int *)malloc(sizeof(int) *(long long)(max - min));
	if (min >= max)
		return (0);
	if (dest == 0)
		return (0);
	j = min;
	while (i < max - min)
		dest[i++] = j++;
	return (dest);
}
/*
#include <stdio.h>
int main()
{
//ex01
    printf("-------ex01-------\n\n");
    int *ex01_arr1;
    int *ex01_arr2;
    int *ex01_arr3;

    printf("min : 1, max : 10\n");
    ex01_arr1 = ft_range(1, 10);
    for(int i = 0; i < 9; i++)
    {
        printf("%d ", ex01_arr1[i]);
    }
    printf("\n\n");
    printf("min : 10, max : 1\n");
    ex01_arr2 = ft_range(10, 1);
    printf("%p ", ex01_arr2);
    printf("\n\n");
    printf("min : -25, max : -10\n");
    ex01_arr3 = ft_range(-25, -10);
    for(int i = 0; i < 15; i++)
    {
        printf("%d ", ex01_arr3[i]);
    }
    printf("\n\n");
    free(ex01_arr1);
    free(ex01_arr2);
    free(ex01_arr3);
}*/
