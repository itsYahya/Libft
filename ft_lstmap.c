/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:18:00 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/05 20:03:40 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_head;
	t_list	*new_node;

	head = lst;
	new_head = 0;
	while (head)
	{
		new_node = ft_lstnew((f)(head->content));
		if (new_node)
		{
			if (new_head == 0)
				new_head = new_node;
			else
				ft_lstadd_back(&new_head, new_node);
			head = head->next;
		}
		else
			ft_lstclear(&new_head, del);
	}
	return (new_head);
}
/*
#include<string.h>
void	del(void *con)
{
	char	*table;
	table = (char *)con;
	table[0] = '\0';
}
void	*f(void *content)
{
	char	*con;
	int		index;
	int		i;

	con = (char *)content;
	if (strcmp(con, "im the node 1") == 0)
		return (0);
	else
	{
		index = ft_strlen(con);
		i = index + 4;
		while (index < i)
			con[index++] = '0';
		con[index] = '\0';	
	}
	return (con);
}


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
	temp = ft_lstmap(head, &f, &del);
	printf("\n");
	while (temp)
	{
		printf("%s\n", temp->content);
		temp = temp->next;
	}
	return (0);
}*/
