/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 09:40:18 by wwalker           #+#    #+#             */
/*   Updated: 2017/11/15 23:19:48 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				usage(void)
{
	ft_putstr("Error\n");
	ft_putstr("Usage: ./fillit 'target_file'\n");
	return (0);
}

int				main(int ac, char **av)
{
	if (ac != 2)
		return (usage());
	read_file(ac, av);
	return (0);
}
