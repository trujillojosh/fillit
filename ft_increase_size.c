/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_increase_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 19:59:18 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/21 20:08:02 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_increase_size(char *str)
{
	char	*new;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	i++;
	ft_strclr(str);
	free(str);
	len = i * (i + 1);
	new = ft_emptysquare(len, i);
	return (new);
}
