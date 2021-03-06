/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:20:17 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/06 11:00:59 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			index;
	unsigned char	ch1;
	unsigned char	ch2;

	index = 0;
	if (n <= 0)
		return (0);
	ch1 = str1[index];
	ch2 = str2[index];
	while (str1[index] != '\0' && str2[index] != '\0' && index < (n - 1))
	{
		if (str1[index] != str2[index])
			return (ch1 - ch2);
		index++;
		ch1 = str1[index];
		ch2 = str2[index];
	}
	return ((ch1 - ch2));
}
