/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:30:17 by thakala           #+#    #+#             */
/*   Updated: 2021/11/26 23:40:32 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
	#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	sign;

	sign = -(n < 0) | 0x1;
	if (n)
		ft_putnbr_fd(n / 10, fd);
	if (sign == -1 && n > -10)
		printf("-");
	if (n)
		printf("%d\n", sign * (n % 10));
}

void	ft_putnbr_fd_0(int n, int fd)
{
	char	d;

	if (n < 0)
	{
		write(fd, "-", 1);
		if (n == (int)(~(~0u >> 1)))
		{
			ft_putnbr_fd(-(n / 10), fd);
			ft_putnbr_fd(-(n % 10), fd);
		}
		else
			ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		d = '0' + (char)n;
		write(fd, &d, 1);
	}
}

/*
	jturunen
*/

void	ft_putnbr_fd_10(int n, int fd)
{
	if (n / 10 != 0)
		ft_putnbr_fd(n / 10, fd);
	else if (n < 0)
		ft_putchar_fd('-', fd);
	if (n < 0)
		ft_putchar_fd(((n % 10) * -1) + '0', fd);
	else
		ft_putchar_fd((n % 10) + '0', fd);
}

void	ft_putnbr_fd_11(int n, int fd)
{
	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	else if (n < 0)
		ft_putchar_fd('-', fd);
	if (n < 0)
		ft_putchar_fd(-(n % 10) + '0', fd);
	else
		ft_putchar_fd((n % 10) + '0', fd);
}

/*
	jraivio
*/

void	ft_putnbr_fd_20(int n, int fd)
{
	if (n < -9 || n > 9)
		ft_putnbr_fd(n / 10, fd);
	else if (n >= -9 && n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd((char)(n * -1) + '0', fd);
		return ;
	}
	n %= 10;
	if (n < 0)
		n *= -1;
	ft_putchar_fd((char)n + '0', fd);
}

void	ft_putnbr_fd_21(int n, int fd)
{
	if (n < -9 || n > 9)
		ft_putnbr_fd(n / 10, fd);
	else if (n >= -9 && n < 0)
	{
		ft_putchar_fd('-', fd);
		return (ft_putchar_fd((char)(-n) + '0', fd));
	}
	n = (n % 10) * ((-((n % 10) < 0)) | 0x1);
	ft_putchar_fd((char)n + '0', fd);
}
