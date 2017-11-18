/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:47:33 by wwalker           #+#    #+#             */
/*   Updated: 2017/11/17 15:00:41 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		read_file(int ac, char **av)
{
	int		fd;
	int		i;
	char	str[FSIZE + 1];

	i = 0;
	fd = open(av[ac - 1], O_RDONLY);
	while (read(fd, &str, FSIZE + 1) != 0)
	{
		i = read(fd, &str, SIZE + 1);
		check_piece(str);
		ft_putstr(str);
		str[i] = '\0';
	}
	return (1);
}
