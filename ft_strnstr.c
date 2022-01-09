/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:02:34 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/05 18:05:05 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *charset, size_t n)
{
	size_t	index;
	size_t	i;

	index = 0;
	if (charset[0] == '\0')
		return ((char *)str);
	while (str[index] != '\0' && index < n)
	{
		i = 0;
		while (str[index + i] == charset[i] && (index + i) < n)
		{
			i++;
			if (charset[i] == '\0')
				return ((char *)&str[index]);
		}
		index++;
	}
	return (0);
}
