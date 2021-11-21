/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:19:25 by thakala           #+#    #+#             */
/*   Updated: 2021/11/21 19:08:31 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = (size_t)(-1);
	while (++i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)&(s[i]));
	}
	return (NULL);
}
