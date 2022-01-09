/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:14:10 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/06 15:16:28 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t size)
{
	char			*table;
	int				index;
	unsigned char	c;
	unsigned char	char_;

	c = ch;
	index = 0;
	table = (char *)str;
	while (size-- > 0)
	{
		char_ = table[index];
		if (char_ == c)
			return (&table[index]);
		index++;
	}
	return (0);
}
