/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 20:24:20 by jtrujill          #+#    #+#             */
/*   Updated: 2016/12/17 20:34:18 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_len_check(const char *str)
{
	int	len;
	int	hash;
	int	dot;
	int	line;

	len = ft_strlen(str);
	hash = 0;
	dot = 0;
	line = 0;
	if ((ft_strlen(str) % 21) != 0)
		return (0);
	len = len / 21;
	while (*str)
	{
		if (*str == '#')
			hash++;
		if (*str == '.')
			dot++;
		if (*str == '\n')
			line++;
		str++;
	}
	if ((ft_dimensions_check(len, hash, dot, line)) == 1)
		return (1);
	return (0);
}
