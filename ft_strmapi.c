/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:46:41 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/06 12:51:30 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*table;
	int		index;
	int		len;

	if (str == 0)
		return (0);
	index = 0;
	len = ft_strlen((char *)str);
	table = (char *)malloc(sizeof(char) * (len + 1));
	if (table == NULL)
		return (NULL);
	while (str[index] != '\0')
	{
		table[index] = (*f)((unsigned int)index, str[index]);
		index++;
	}
	table[index] = '\0';
	return (table);
}
/*
#include<stdio.h>
static char	ft_toupper(unsigned int index, char ch)
{
	index++;
	if (ch >= 'a' && ch <= 'z')
		return (ch - 32);
	return (ch);
}

int	main(void)
{
	printf("%s",ft_strmapi("helloo there", &ft_toupper));
	return (0);
}*/
