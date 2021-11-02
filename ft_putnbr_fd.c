/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:30:17 by thakala           #+#    #+#             */
/*   Updated: 2021/11/02 11:51:11 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == (int)(~((~0u) >> 1)))
		{
			ft_putnbr_fd(-((int)(~((~0u) >> 1) / 10)), fd);
			ft_putnbr_fd(-((int)(~((~0u) >> 1) % 10)), fd);
		}
		else
		{
			ft_putchar_fd('-', fd);
			ft_putnbr_fd(-n, fd);
		}
	}
	else
	{
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		else
			ft_putchar_fd('0' + n, fd);
	}
}
