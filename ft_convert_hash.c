/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hash.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 14:20:56 by jtrujill          #+#    #+#             */
/*   Updated: 2016/12/18 14:32:03 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_convert_hash(char *str)
{
	int		count;
	char	change;
	int		i;

	i = 0;
	count = 0;
	change = 'A';
	while (str[i] != '\0')
	{
		if (count == 21)
		{
			change++;
			count = 0;
		}
		if (str[i] == '#')
			str[i] = change;
		count++;
		i++;
	}
	return (str);
}
