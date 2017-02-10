/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 21:30:16 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/04 21:34:36 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_format(char *str)
{
	str = ft_condense(str);
	str = ft_upper_left(str);
	str = ft_divider(str, '|');
	str = ft_convert_hash(str);
	ft_solver(str);
}
