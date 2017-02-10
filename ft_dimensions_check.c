/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dimensions_check.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 20:57:45 by jtrujill          #+#    #+#             */
/*   Updated: 2016/12/17 20:59:25 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_dimensions_check(int len, int hash, int dot, int line)
{
	if (len > 26)
		return (0);
	hash = hash / 4;
	dot = dot / 12;
	line = line / 5;
	if (len == hash)
		if (len == dot)
			if (len == line)
				return (1);
	return (0);
}
