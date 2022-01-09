/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:08:09 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/06 13:22:48 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char const *str, void (*f)(unsigned int, char*))
{
	int		index;

	if (str)
	{
		index = 0;
		while (str[index] != '\0')
		{
			(*f)((unsigned int)index, (char *)&str[index]);
			index++;
		}
	}
}
/*
#include<stdio.h>
static void	ft_toupper(unsigned int index, char *ch)
{
	index++;
	char a = '0';
	*ch = a;
}

int	main(void)
{
	char a[200] = "hello there";
	printf("%s",ft_strmapi(a, &ft_toupper));
	return (0);
}*/
