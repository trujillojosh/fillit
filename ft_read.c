/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 22:40:07 by jtrujill          #+#    #+#             */
/*   Updated: 2017/02/09 22:46:56 by jtrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_read(char *str)
{
	char	*new;
	int		count;
	int		ret;
	int		fd;
	char	buf[2];

	count = 0;
	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (NULL);
	new = (char *)malloc(sizeof(char) * 548);
	while ((ret = read(fd, buf, 1)))
	{
		if (count > 5487)
			return (NULL);
		buf[ret] = '\0';
		new[count] = buf[0];
		count++;
	}
	new[count] = '\n';
	count++;
	new[count] = '\0';
	close(fd);
	return (new);
}
