/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:52:25 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/06 13:18:42 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_sep(const char *set, char ch)
{
	int	index;

	index = 0;
	while (set[index] != '\0')
	{
		if (set[index] == ch)
			return (1);
		index++;
	}
	return (0);
}

static int	ft_get_start(char const *str, const char *set)
{
	int	index;

	index = 0;
	while (ft_is_sep(set, str[index]))
		index++;
	return (index);
}

static int	ft_get_end(char const *str, const char *set)
{
	int	index;

	index = ft_strlen(str) - 1;
	while (ft_is_sep(set, str[index]))
		index--;
	return (++index);
}

char	*ft_strtrim(char const *str, char const *set)
{
	int					start;
	int					end;
	char				*table;
	unsigned int		size;

	if (str == 0)
		return (0);
	start = ft_get_start(str, set);
	end = ft_get_end(str, set);
	if (end == 0)
		size = 1;
	else
		size = end - start + 1;
	table = (char *)malloc(sizeof(char) * size);
	if (table == NULL)
		return (0);
	ft_strlcpy(table, str + start, size);
	return (table);
}
