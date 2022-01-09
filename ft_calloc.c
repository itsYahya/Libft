/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:06:34 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/04 12:09:19 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*table;

	table = (void *)malloc(count * size);
	if (table == NULL)
		return (0);
	ft_bzero(table, count * size);
	return (table);
}
/*
#include<stdio.h>
int	main(void)
{
	int	*table;
	int	i = 0;
	table = (int *)ft_calloc(10, 4);
	while (i < 10)
		printf("%d", table[i++]);
	return (0);
}*/
