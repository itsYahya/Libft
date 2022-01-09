/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:52:37 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/06 13:12:10 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	len;

	if (str == 0)
		return ;
	len = ft_strlen(str);
	write(fd, str, len);
}
/*
#include<fcntl.h>
int	main(void)
{
	int	fd = open("test.txt", O_WRONLY | O_CREAT);
	if (fd > 0)
		ft_putstr_fd("12300", fd);
	close(fd);
	return (0);
}*/
