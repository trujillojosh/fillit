/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 01:58:47 by jtrujill          #+#    #+#             */
/*   Updated: 2017/02/03 15:41:02 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_next_index(char *s1, int i, int size, int count)
{
	int		pos;
	int		until;

	pos = 1;
	until = 0;
	while (s1[i] != '\n' && pos <= count)
	{
		if ((s1[i] != '.') && (count == pos) && (s1[i] != '|'))
			return (until);
		else if (s1[i] == '|')
		{
			until = until + 1 + (size - 4);
			i++;
		}
		else
		{
			if (s1[i] != '.')
				pos++;
			until++;
			i++;
		}
	}
	return (until);
}
