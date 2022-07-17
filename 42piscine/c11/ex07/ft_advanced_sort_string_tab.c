/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_sting_tab.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:50:14 by dayun             #+#    #+#             */
/*   Updated: 2022/05/03 17:32:13 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		len;
	int		idx1;
	int		idx2;
	char	*tmp;

	i = 0;
	len = ft_tablen(tab);
	while (i < len)
	{
		idx1 = 0;
		while (idx1 < len - 1)
		{
			idx2 = idx1 + 1;
			if ((*cmp)(tab[idx1], tab[idx2]) > 0)
			{
				tmp = tab[idx1];
				tab[idx1] = tab[idx2];
				tab[idx2] = tmp;
			}
			idx1++;
		}
		i++;
	}
}
