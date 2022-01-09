/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:59:26 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/11/04 09:41:53 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = n;
	if (number < 0)
	{
		write(fd, "-", 1);
		number = -number;
	}
	if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putnbr_fd(number % 10, fd);
	}
	else
	{
		number += '0';
		write(fd, &number, 1);
	}
}

/*
#include <fcntl.h>

int	main(void)
{
	int	fd = open("test.text", O_WRONLY | O_CREAT);
	if (fd > 0)
		ft_putnbr_fd(-20000000, fd);
	close(fd);
}*/
