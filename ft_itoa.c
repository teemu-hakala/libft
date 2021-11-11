/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:03:12 by thakala           #+#    #+#             */
/*   Updated: 2021/11/11 09:14:31 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static size_t	ft_intlen(int n)
{
	size_t		l;

	l = 0;
	if (n <= 0)
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
	size_t	n_len;
	size_t	i;

	n_len = ft_intlen(n);
	numeral = (char *)malloc(sizeof(*numeral) * (n_len + 1));
	if (!numeral)
		return ((char *)0);
	i = n_len;
	numeral[i] = '\0';
	if (n < 0)
	{
		numeral[0] = '-';
		numeral[--i] = '0' + -(n % 10);
		n /= -10;
	}
	else if (n == 0)
		numeral[--i] = '0';
	while (i > 0 && n)
	{
		numeral[--i] = '0' + n % 10;
		n /= 10;
	}
	return (numeral);
}
