/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isfill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 16:20:48 by jtrujill          #+#    #+#             */
/*   Updated: 2017/02/07 16:25:33 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_isfill(char *s1, char *s2, int j)
{
	int		size;

	size = ft_size_find(s2);
	while (*s1 == '.')
		s1++;
	if (s2[ft_next_index(s1, 0, size, 1) + j] == '.')
		if (s2[ft_next_index(s1, 0, size, 2) + j] == '.')
			if (s2[ft_next_index(s1, 0, size, 3) + j] == '.')
				if (s2[ft_next_index(s1, 0, size, 4) + j] == '.')
					return (1);
	return (0);
}
