/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwjeo <chanwjeo@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 19:49:18 by chanwjeo          #+#    #+#             */
/*   Updated: 2022/05/01 23:31:40 by chanwjeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H

# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_info
{
	int			fd;
	int			size;
	int			len;
	char		buf[4096];
	char		**buf_split;
}				t_info;

int		dict_in_1(char *dict[2][101], t_info p1, char *input_dict, char *argv);
int		dict_in_2(t_info p1);
int		dict_in_3(char *dict[2][101], t_info p1, char *argv);
void	reading_r(char *nbr, char *dict[2][101], int flag);
void	reading_r_no_sp(char *nbr, char *dict[2][101], int flag);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
char	*ft_strndup(char *src, int n);
char	*ft_strdup(char *src);
int		_is_in(char c, char *src);
int		_malloc_size(char *str, char *charset);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_trim(char *str, int is_num);
char	**ft_split(char *str, char *charset);
int		num_return(int num);
void	ft_putstr_ns(char *str);
int		is_valid_argu(char *str);
int		is_valid_dict(char *str, char *end);
void	ft_print_number(char *av1, char *dict[2][101]);
int		main_is_too_long(int argc, char *argv[]);
void	ft_large_nbr_1(char *nbr, char *dict[2][101], int flag);
void	ft_large_nbr_2(char *nbr, char *dict[2][101], int flag, int len);
void	ft_print_err(int flag);

#endif
