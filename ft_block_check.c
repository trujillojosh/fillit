/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_block_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 17:33:54 by jtrujill          #+#    #+#             */
/*   Updated: 2016/12/17 18:55:05 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_block_check(const char *str)
{
	int		line;

	line = 0;
	while (*str)
	{
		if (*str == '\n')
		{
			line++;
			str++;
		}
		else if (line == 4)
		{
			line = 0;
			if (*str != '\n')
				return (0);
			str++;
		}
		else
			str++;
	}
	return (1);
}
