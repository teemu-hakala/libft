/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:38:59 by thakala           #+#    #+#             */
/*   Updated: 2021/12/05 13:24:15 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	l_dst;
	size_t	l_src;

	l_dst = ft_strlen(dst);
	l_src = 0;
	if (l_dst >= dstsize)
		return (ft_strlen(src) + dstsize);
	while (*src && dstsize - (l_dst + l_src) - 1)
		dst[l_dst + l_src++] = *src++;
	dst[l_dst + l_src] = '\0';
	while (*src++)
		l_src++;
	return (l_dst + l_src);
}
