/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:03:12 by thakala           #+#    #+#             */
/*   Updated: 2021/11/03 09:06:00 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_intlen(int n)
{
	int		l;

	l = 0;
	if (n < 0)
		l++;
	while (n)
	{
		n /= 10;
		l++;
	}
	return (l++);
}

char	*ft_itoa(int n)
{
	char	*numeral;
	int		n_len;
	int		i;

	n_len = ft_intlen(n);
	numeral = (char *)malloc(sizeof(*numeral) * (n_len + 1));
	if (n < 0)
		numeral[0] = '-';
	i = n_len;
	numeral[i--] = '\0';
	while (i > 0)
	{
		numeral[i--] = '0' + n % 10;
		n /= 10;
	}
	return (numeral);
}
