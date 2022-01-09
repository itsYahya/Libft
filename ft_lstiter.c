/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstiter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:47:35 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/05 11:17:44 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *node, void (*f)(void *))
{
	t_list	*head;

	head = node;
	while (head)
	{
		(*f)(head->content);
		head = head->next;
	}
}
/*
void	del(void *con)
{
	char	*table;
	int	index;
	int	i;
	table = (char *)con;
	index = ft_strlen(table);
	i = index + 4;
	while (index < i)
		table[index++] = '.';
	table[index] = '\0';
}

#include<stdio.h>
int	main(void)
{
	t_list	*head;
	t_list	*nod1;
	t_list	*nod2;
	t_list	*nod3;
	t_list	*nod4;
	t_list	*nod5;
	t_list	*nod6;

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
	char	te1[200] = "im the node 5";
	nod4 = ft_lstnew(te1);
	char	tet1[200] = "im the node 6";
	nod5 = ft_lstnew(tet1);
	char	t1[200] = ";) im last now";
	nod6 = ft_lstnew(t1);
	ft_lstadd_back(&head, nod4);
	ft_lstadd_back(&head, nod5);
	ft_lstadd_back(&head, nod6);
	temp = head;
	while (temp)
	{
		printf("%s\n", temp->content);
		temp = temp->next;
	}
	ft_lstiter(head, &del);
	temp = head;
	while (temp)
	{
		printf("%s\n", temp->content);
		temp = temp->next;
	}
	return (0);
}*/
