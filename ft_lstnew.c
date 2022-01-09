/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:26:42 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/05 21:56:44 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;
	t_list	*next;

	next = NULL;
	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (0);
	head->content = content;
	head->next = next;
	return (head);
}
/*
#include<stdio.h>
int	main()
{
	t_list	*list;
	int	table[300] = {1021, 2, 3};
	int	*tab;

	list = ft_lstnew(table);
	tab = (int *)(list->content);
	printf("%d", tab[0]);
	return (0);
}*/
