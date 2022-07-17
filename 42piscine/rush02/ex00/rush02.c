/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwjeo <chanwjeo@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 18:46:50 by chanwjeo          #+#    #+#             */
/*   Updated: 2022/05/01 21:45:25 by chanwjeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char *argv[])
{
	char	*tmp;

	if (argc > 3 || argc == 1)
	{
		write(1, "error\n", 6);
		return (0);
	}
	if (argc == 3)
	{
		tmp = argv[1];
		argv[1] = argv[2];
		argv[2] = tmp;
	}
	main_is_too_long(argc, argv);
	return (0);
}

int	main_is_too_long(int argc, char *argv[])
{
	char	*dict[2][101];
	t_info	p1;

	p1.size = 0;
	if (argc == 3)
	{
		if (dict_in_1(dict, p1, argv[2], argv[1]) == -1)
			return (0);
	}
	else
	{
		if (dict_in_1(dict, p1, "numbers.dict", argv[1]) == -1)
			return (0);
	}
	if (!is_valid_argu(argv[1]))
		return (0);
	ft_print_number(argv[1], dict);
	write(1, "\n", 1);
	return (0);
}
