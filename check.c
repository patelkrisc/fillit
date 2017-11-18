/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 21:35:58 by kpatel            #+#    #+#             */
/*   Updated: 2017/11/17 14:59:26 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_piece(char *str)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		if (ft_istet(str[x]))
			x++;
		else if (!ft_istet(str[x]))
			ft_erexit();
	}
	if (x == 4)
	{
		x++;
		str[x] = '\n';
		y++;
	}
	if (y == 4)
	{
		y++;
		ft_putchar('\n');
		y = 0;
	}
	return (1);
}

int		check_comp(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (check_piece(str))
		{
			if (str[i] == '#')
				j++;
			i++;
			if (j != 4)
				ft_erexit();
			else if (j == 4)
				return (store_tet(str));
		}
	}
	return (1);
}
