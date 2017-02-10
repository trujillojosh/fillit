/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 16:47:18 by jtrujill          #+#    #+#             */
/*   Updated: 2016/12/17 18:21:28 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_input_check(const char *str)
{
	if ((ft_len_check(str)) == 1)
		if ((ft_char_check(str)) == 1)
			if ((ft_block_check(str)) == 1)
				if ((ft_connecting(str)) == 1)
					return (1);
	return (0);
}
