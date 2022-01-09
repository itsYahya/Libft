/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:42:04 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/06 12:38:01 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char ch, int fd)
{
	write(fd, &ch, 1);
}
/*
#include <fcntl.h>
int	main(void)
{
	int	fd = open("test.txt", O_WRONLY | O_CREAT);
	if (fd > 0)
		ft_putchar_fd('@', fd);
	close(fd);
	return (0);
}*/
