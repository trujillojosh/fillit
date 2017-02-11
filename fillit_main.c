/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 15:35:40 by jtrujill          #+#    #+#             */
/*   Updated: 2017/02/10 23:03:22 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char	*new;

	if (argc != 2)
	{
		ft_putstr("usage: ./fillit [tetrimino_file]\n");
		return (1);
	}
	else
	{
		new = ft_read(argv[1]);
		if (new[0] == '\0')
		{
			ft_putstr("error\n");
			return (1);
		}
		if ((ft_input_check((const char *)new)) != 1)
		{
			ft_putstr("error\n");
			return (1);
		}
		ft_format(new);
	}
	return (0);
}
