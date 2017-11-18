/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:25:23 by wwalker           #+#    #+#             */
/*   Updated: 2017/11/17 15:00:59 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		store_tet(char *str)
{
	int i;

	i = 0;
	while (str != '\0')
	{
		ft_strtrimeb(str);
		ft_memalloc(str[i]);
		i++;
		ft_putstr(str);
	}
	return (1);
}
