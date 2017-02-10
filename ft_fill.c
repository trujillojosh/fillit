/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 16:31:45 by jtrujill          #+#    #+#             */
/*   Updated: 2017/02/07 16:31:50 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_fill(char *s1, char *s2, int j)
{
	int		size;

	size = ft_size_find(s2);
	while (*s1 == '.')
		s1++;
	s2[ft_next_index(s1, 0, size, 1) + j] = s1[0];
	s2[ft_next_index(s1, 0, size, 2) + j] = s1[0];
	s2[ft_next_index(s1, 0, size, 3) + j] = s1[0];
	s2[ft_next_index(s1, 0, size, 4) + j] = s1[0];
	return (s2);
}
