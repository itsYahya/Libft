/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:24:09 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/06 12:36:17 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	lendest;
	size_t	index;
	size_t	index1;

	index1 = 0;
	len = ft_strlen(src);
	lendest = ft_strlen(dest);
	index = lendest;
	if (lendest >= size)
		return (len + size);
	while (src[index1] != '\0' && index < size - 1)
	{
		dest[index] = src[index1];
		index1++;
		index++;
	}
	dest[index] = '\0';
	return (len + lendest);
}
