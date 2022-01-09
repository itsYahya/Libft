/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:22:57 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/06 13:20:06 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_min(size_t len, size_t max)
{
	if (len <= max)
		return (len);
	else
		return (max);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char		*table;
	size_t		size;

	if (str == 0)
		return (0);
	if (ft_strlen(str) <= start)
		size = 0;
	else
		size = ft_min(ft_strlen(str) - start, len);
	table = NULL;
	table = (char *)malloc(sizeof(char) * (size + 1));
	if (table == NULL)
		return (0);
	ft_strlcpy(table, str + start, size + 1);
	return (table);
}
