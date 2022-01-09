/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:51:46 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/04 17:14:33 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **list, t_list *new)
{
	t_list	*head;

	head = *list;
	new->next = head;
	*list = new;
}
/*
#include<stdio.h>
int	main(void)
{
	t_list	*head;
	t_list	*nod1;
	t_list	*nod2;
	t_list	*temp;

	char	text[200] = "im the head";
	head = ft_lstnew(text);
	char	te[200] = "im the node 1";
	nod1 = ft_lstnew(te);
	char	tet[200] = "im the node 2";
	nod2 = ft_lstnew(tet);
	ft_lstadd_front(&nod2, nod1);
	ft_lstadd_front(&nod1, head);
	temp = head;
	while (temp)
	{
		printf("%s\n", temp->content);
		temp = temp->next;
	}
}*/
