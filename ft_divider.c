/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_divider.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/30 17:19:44 by jtrujill          #+#    #+#             */
/*   Updated: 2017/02/03 15:46:32 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_divider(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] == '\n')
			count = 0;
		if (count == 4)
		{
			if (str[i] != '\n')
				str[i] = c;
			count = 0;
		}
		else
		{
			count++;
		}
		i++;
	}
	return (str);
}
