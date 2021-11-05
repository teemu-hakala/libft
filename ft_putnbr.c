/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teemuhakala <teemuhakala@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:52:05 by thakala           #+#    #+#             */
/*   Updated: 2021/11/05 03:15:51 by teemuhakala      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr(int n)
{
	char	d;

	if (n < 0)
	{
		write(1, "-", 1);
		if (n == (int)(~(~0u >> 1)))
		{
			ft_putnbr(-(n / 10));
			ft_putnbr(-(n % 10));
		}
		else
			ft_putnbr(-n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		d = '0' + (char)n;
		write(1, &d, 1);
	}
}
