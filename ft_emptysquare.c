/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_emptysquare.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 15:47:39 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/10 15:58:44 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_emptysquare(int len, int line)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	new = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		if (j == line)
		{
			new[i] = '\n';
			j = 0;
		}
		else
		{
			new[i] = '.';
			j++;
		}
		i++;
	}
	new[i] = '\0';
	return (new);
}
