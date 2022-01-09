/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:05:36 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/06 10:45:49 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*dest_;
	char	*src_;

	if (src == 0 && dest == 0)
		return (0);
	dest_ = (char *)dest;
	src_ = (char *)src;
	if (dest > src)
	{
		dest_ += size;
		src_ += size;
		while (size-- > 0)
			*--dest_ = *--src_;
	}
	else
		ft_memcpy(dest_, src_, size);
	return (dest);
}
