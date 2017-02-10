/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 13:37:25 by jtrujill          #+#    #+#             */
/*   Updated: 2017/01/10 13:38:57 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_solver(char *s1)
{
	char	*s2;
	char	**input;

	s2 = ft_start(s1);
	input = ft_strsplit(s1, '\n');
	ft_strclr(s1);
	free(s1);
	s2 = ft_will_fit(input, s2);
	ft_putstr(s2);
}
