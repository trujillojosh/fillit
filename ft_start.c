/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 13:37:46 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/10 13:39:34 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_start(char *str)
{
	int		i;
	int		len;
	char	*new;

	i = (ft_cd_freq(str, '\n') - 1) * 4;
	i = ft_nextsquare(i);
	len = i * (i + 1);
	new = ft_emptysquare(len, i);
	return (new);
}
