/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:02:40 by dayun             #+#    #+#             */
/*   Updated: 2022/05/02 09:30:48 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	*arr;

	i = 0;
	arr = (int *)malloc(sizeof(int) * (long long)(max - min));
	if (min >= max)
		return (0);
	if (!arr)
		return (-1);
	j = min;
	while (i < max - min)
		arr[i++] = j++;
	*range = arr;
	return (max - min);
}
/*
#include <stdio.h>
int main()
{
	int *arr;
//	arr = NULL;
	int i = 0;
	int len = ft_ultimate_range(&arr, 10, 20);
	while (i < len)
	{
		printf("%d \n", arr[i]);
		i++;
	}

	printf("-------ex02-------\n\n");
    int	*ex02_arr1;
    int	*ex02_arr2;
    int	*ex02_arr3;
	int size1 = ft_ultimate_range(&ex02_arr1, 5, 10);
    int size2 = ft_ultimate_range(&ex02_arr2, -4, 10);
    int size3 = ft_ultimate_range(&ex02_arr3, 10, 1);

    printf("min : 5, max : 10, size : %d\n", size1);
	for (int i = 0; i < size1 ; i++)
	{
		printf("%d ", ex02_arr1[i]);
	}
    printf("\n\n");
    printf("min : -4, max : 10, size : %d\n", size2);
	for (int i = 0; i < size2 ; i++)
	{
		printf("%d ", ex02_arr2[i]);
	}
    printf("\n\n");
    printf("min : 10, max : 1, size : %d\n", size3);
	printf("%p ", ex02_arr3);
    printf("\n\n");
    free(ex02_arr1);
    free(ex02_arr2);
    free(ex02_arr3);
}*/
