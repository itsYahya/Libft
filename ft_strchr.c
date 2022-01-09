/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:38:56 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/02 18:53:25 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		index;
	char	ch;

	ch = (char)c;
	if (ch == '\0')
		return ((char *)&str[ft_strlen(str)]);
	index = 0;
	while (str[index] != '\0')
	{
		if (ch == str[index])
			return ((char *)&str[index]);
		index++;
	}
	return (0);
}
