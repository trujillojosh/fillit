/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextsquare.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 15:11:40 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/10 15:24:14 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_nextsquare(int i)
{
	int	square;

	square = 1;
	while ((square * square) < i)
		square++;
	if ((square * square) == i)
		return (square);
	return (square);
}
