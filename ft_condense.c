/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_condense.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 12:58:57 by jtrujill          #+#    #+#             */
/*   Updated: 2016/12/21 12:59:33 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_condense(char *str)
{
	int		count;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (count == 20)
		{
			str[i] = '\n';
			count = 0;
			i++;
		}
		if (str[i] == '\n')
			str[i] = '.';
		count++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
