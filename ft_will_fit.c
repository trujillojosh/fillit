/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_will_fit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 15:02:43 by jtrujill          #+#    #+#             */
/*   Updated: 2017/02/09 20:16:53 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_will_fit(char **input, char *s2)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (input[i] != NULL)
	{
		if ((ft_isfill(input[i], s2, j) == 0) && (s2[j + 1] == '\0'))
		{
			if ((i == 0) && (s2[j + 1] == '\0'))
				return (ft_will_fit(input, ft_increase_size(s2)));
			j = ft_laststart(input[--i], s2);
			ft_reset(s2, input[i]);
		}
		else if (ft_isfill(input[i], s2, j) != 0)
		{
			ft_fill(input[i], s2, j);
			j = -1;
			i++;
		}
		j++;
	}
	return (s2);
}
