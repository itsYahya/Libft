/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:36:16 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/06 13:02:33 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char	*dest_;
	char	*src_;

	if (dest == 0 && src == 0)
		return (0);
	dest_ = (char *)dest;
	src_ = (char *)src;
	while (size-- > 0)
		*dest_++ = *src_++;
	return (dest);
}
