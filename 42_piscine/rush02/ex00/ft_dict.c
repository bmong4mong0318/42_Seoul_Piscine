/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwjeo <chanwjeo@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 19:52:29 by chanwjeo          #+#    #+#             */
/*   Updated: 2022/05/01 23:33:51 by chanwjeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	dict_in_1(char *dict[2][101], t_info p1, char *input_dict, char *argv)
{
	p1.size = 0;
	p1.fd = open(input_dict, O_RDWR);
	p1.len = read(p1.fd, p1.buf + p1.size, 4096 - p1.size);
	p1.buf[p1.len] = '\0';
	if (p1.len > 0)
		p1.size += p1.len;
	else if (p1.len == 0)
		return (-1);
	else if (p1.len < 0 || p1.fd < 0)
		return (-1);
	if (dict_in_2(p1) == -1)
		return (-1);
	p1.buf_split = ft_split(p1.buf, " :\n\t\v\f\r");
	if (dict_in_3(dict, p1, argv) == -1)
		return (-1);
	close(p1.fd);
	return (1);
}

int	dict_in_2(t_info p1)
{
	int		i;
	char	*start;

	i = 0;
	while (p1.buf[i])
	{
		start = &p1.buf[i];
		while (p1.buf[i] != '\n')
			i++;
		if (!is_valid_dict(start, &p1.buf[i]))
		{
			ft_print_err(0);
			return (-1);
		}
		i++;
	}
	return (0);
}

int	dict_in_3(char *dict[2][101], t_info p1, char *argv)
{
	int	max;

	max = -1;
	while (*p1.buf_split && *(p1.buf_split + 1))
	{
		if (*p1.buf_split)
			p1.len = ft_strlen(*p1.buf_split);
		if (p1.len > max)
			max = p1.len;
		if (p1.len > 3)
			dict[1][(p1.len - 1) / 3 - 1] = ft_strdup(*(p1.buf_split + 1));
		else
			dict[0][ft_atoi(*p1.buf_split)] = ft_strdup(*(p1.buf_split + 1));
		p1.buf_split += 2;
	}
	if (max + 3 <= ft_strlen(argv))
	{
		ft_print_err(0);
		return (-1);
	}
	return (1);
}

int	is_valid_dict(char *str, char *end)
{
	if (*str == '\n')
		return (1);
	if (!(*str >= '0' && *str <= '9'))
		return (0);
	while (*str >= '0' && *str <= '9')
		str++;
	while ((*str >= 33 && *str <= 57)
		|| (*str >= 59 && *str <= 126))
		str++;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str != ':')
		return (0);
	str++;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (!(*str > 32 && *str <= 126))
		return (0);
	while (*str > 32 && *str <= 126)
		str++;
	if (*str != '\n')
		return (0);
	if (str == end)
		return (1);
	return (0);
}
