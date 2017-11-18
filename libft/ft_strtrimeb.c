/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimeb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 01:43:02 by wwalker           #+#    #+#             */
/*   Updated: 2017/11/17 17:29:32 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrimeb(char const *s)
{
	size_t i;
	size_t j;

	i = 0;
	if (!s)
		return (0);
	while (s[i] == '.')
		i++;
	if (s[i] == '\0')
		return (ft_strdup(s + i));
	j = ft_strlen(s) - 1;
	while (s[j] == '.')
		j--;
	return (ft_strsub(s, i, j - i + 1));
}
