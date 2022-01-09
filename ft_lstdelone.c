/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdelone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:32:24 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/05 18:57:16 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	del(void *con)
{
	char	*table;
	table = (char *)con;
	*table = 0;
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
	while (temp)
	{
		printf("fisrt || %s\n", temp->content);
		temp = temp->next;
	}
	printf("||we are now : %d||\n",ft_lstsize(head));
	t_list	*T = head;
	t_list	*TEM;
	int	i = 0;
	while (T)
	{
		if (i == 2)
		{
			TEM->next = T->next;
			ft_lstdelone(T, &del);
			break;
		}
		TEM = T;
		T = T->next;
		i++;
	}
	temp = head;
	printf("||UPDATE we are now : %d||\n",ft_lstsize(head));
	while (temp)
	{
		printf("%s\n", temp->content);
		temp = temp->next;
	}
	return (0);
}*/
