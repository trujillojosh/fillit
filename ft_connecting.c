/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_connecting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 17:42:35 by jtrujill          #+#    #+#             */
/*   Updated: 2016/12/17 18:32:11 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_connecting(const char *str)
{
	int		i;
	char	tmp[21];
	char	*new;

	new = (char *)str;
	while (*new)
	{
		i = 0;
		while (i < 21)
		{
			tmp[i] = *new;
			i++;
			new++;
		}
		if ((ft_no_island(tmp)) != 1)
			return (0);
		ft_strclr(tmp);
	}
	return (1);
}
