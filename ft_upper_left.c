/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper_left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 20:48:14 by jtrujill          #+#    #+#             */
/*   Updated: 2016/12/19 16:03:33 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_upper_left(char *str)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		count = 0;
		while (str[i] != '#')
			i++;
		while (count < 19)
		{
			i = ft_index(str, i, i);
			while (str[i] != '\n' && count++ < 20)
				str[j++] = str[i++];
			while (count++ < 20)
				str[j++] = '.';
		}
		str[j++] = '\n';
		i++;
	}
	return (str);
}
