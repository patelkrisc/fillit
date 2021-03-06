/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 16:23:04 by kpatel            #+#    #+#             */
/*   Updated: 2017/11/17 17:40:25 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*len;

	i = 0;
	j = ft_strlen(s) - 1;
	if (!s)
		return (0);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	len = (char *)malloc(sizeof(char) * (j - i + 1));
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	k = 0;
	while (i <= j)
	{
		tmp[k] = s[i];
		i++;
		k++;
	}
	tmp[k] = '\0';
	return (tmp);
}
