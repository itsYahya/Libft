/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putendl_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:56:40 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/06 13:11:38 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	if (str == 0)
		return ;
	ft_putstr_fd(str, fd);
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>
int	main(int	argc, char **argv)
{
	int	i = 0;
	int	fd = open("test.txt", O_WRONLY | O_CREAT);
	if (fd > 0)
	{
		while (i < argc)
			ft_putendl_fd(argv[i++], fd);
	}
	close(fd);
	return (0);
}*/
