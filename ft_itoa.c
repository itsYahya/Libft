/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:07:52 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/05 21:35:40 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long number)
{
	int	index;

	index = 0;
	if (number < 0)
	{
		number = -number;
		index++;
	}
	while (number >= 10)
	{
		index++;
		number /= 10;
	}
	index++;
	return (index);
}

static void	ft_looper(char *table, int index, long number)
{
	if (number < 0)
	{
		table[0] = '-';
		ft_looper(table, index, -number);
	}
	else if (number >= 10)
	{
		ft_looper(table, index - 1, number / 10);
		table[index] = number % 10 + '0';
	}
	else
		table[index] = number + '0';
}

char	*ft_itoa(int number)
{
	char	*table;
	int		count;

	count = ft_count(number);
	table = (char *)malloc(sizeof(char) * (count + 1));
	if (table == 0)
		return (0);
	table[count] = '\0';
	ft_looper(table, count - 1, number);
	return (table);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
	return (0);
}*/
