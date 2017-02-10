/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 16:18:19 by jtrujill          #+#    #+#             */
/*   Updated: 2017/02/09 23:41:55 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include "libft/libft.h"

int		main(int argc, char **argv);
int		ft_input_check(const char *str);
int		ft_char_check(const char *str);
int		ft_block_check(const char *str);
int		ft_connecting(const char *str);
int		ft_len_check(const char *str);
int		ft_dimensions_check(int len, int hash, int dot, int line);
int		ft_no_island(const char *str);
char	*ft_convert_hash(char *str);
char	*ft_upper_left(char *str);
char	*ft_condense(char *str);
char	*ft_divider(char *str, char c);
int		ft_index(char *s, int i, int pos);
void	ft_format(char *str);
void	ft_solver(char *s1);
char	*ft_start(char *str);
int		ft_nextsquare(int i);
char	*ft_emptysquare(int len, int line);
int		ft_next_index(char *s1, int i, int size, int count);
int		ft_size_find(char *str);
char	*ft_will_fit(char **input, char *s2);
char	*ft_reset(char *str, char *c);
char	*ft_increase_size(char *str);
int		ft_isfill(char *s1, char *s2, int j);
char	*ft_fill(char *s1, char *s2, int j);
int		ft_laststart(char *s1, char *s2);
char	*ft_read(char *str);

#endif
