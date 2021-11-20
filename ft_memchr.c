/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:19:25 by thakala           #+#    #+#             */
/*   Updated: 2021/11/20 19:02:58 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;

	string = (unsigned char *)s;
	n++;
	while (n--)
	{
		if (*string == (unsigned char)c)
			return (string);
		if (!*string)
			break ;
		string++;
	}
	return ((void *)0);
}
