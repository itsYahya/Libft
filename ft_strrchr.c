/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:10:46 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/02 18:54:21 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		index;
	int		pos;
	char	ch;

	ch = (char)c;
	pos = -1;
	if (ch == '\0')
		return ((char *)&str[ft_strlen(str)]);
	index = 0;
	while (str[index] != '\0')
	{
		if (ch == str[index])
			pos = index;
		index++;
	}
	if (pos > -1)
		return ((char *)&str[pos]);
	return (0);
}
