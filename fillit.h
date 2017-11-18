/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <kpatel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 19:51:31 by kpatel            #+#    #+#             */
/*   Updated: 2017/11/17 01:57:13 by wwalker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include "libft/libft.h"
# define SIZE 20
# define FSIZE 544

typedef struct		s_tet
{
	int		*x;
	int		*y;
	size_t	size;
	char	str;
}					t_tet;

int		store_tet(char *str);
int		read_file(int ac, char **av);
int     usage(void);
int		check_piece(char *str);

#endif
