/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:09:25 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/02 14:50:36 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	unsigned char	*table;

	table = (unsigned char *) str;
	while (size-- > 0)
		*table++ = (unsigned char) c;
	return (str);
}
