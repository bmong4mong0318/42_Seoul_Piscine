/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 08:29:01 by dayun             #+#    #+#             */
/*   Updated: 2022/04/17 19:15:40 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		mok;
	int		remain;

	mok = *a / *b;
	remain = *a % *b;
	*a = mok;
	*b = remain;
}
/*
#include <stdio.h>
int main()
{
	int a;
	int b;

	a=7;
   	b=2;
	ft_ultimate_div_mod(&a,&b);

	printf("%d,%d",a,b);
}*/
