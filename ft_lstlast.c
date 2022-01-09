/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:00:12 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/05 18:48:52 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *head)
{
	t_list	*pre;

	pre = 0;
	while (head)
	{
		pre = head;
		head = head->next;
	}
	return (pre);
}
/*
#include<stdio.h>
int	main(void)
{
	t_list	*head;
	t_list	*nod1;
	t_list	*nod2;
	t_list	*nod3;
	t_list	*temp;

	char	text[200] = "im the head";
	head = ft_lstnew(text);
	char	te[200] = "im the node 1";
	nod1 = ft_lstnew(te);
	char	tet[200] = "im the node 2";
	nod2 = ft_lstnew(tet);
	char	t[200] = "hell nooo!";
	nod3 = ft_lstnew(t);
	ft_lstadd_front(&nod3, nod2);
	ft_lstadd_front(&nod2, nod1);
	ft_lstadd_front(&nod1, head);
	temp = head;
	while (temp)
	{
		printf("%s\n", temp->content);
		temp = temp->next;
	}
	printf("size => %d\n", ft_lstsize(head));
	printf("last element => %s\n", ft_lstlast(head)->content);
	return (0);
}*/
