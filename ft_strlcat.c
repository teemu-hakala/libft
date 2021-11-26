/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:38:59 by thakala           #+#    #+#             */
/*   Updated: 2021/11/26 15:46:17 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = 0;
	if (dst_len >= dstsize)
		return (ft_strlen(src) + dstsize);
	while (*src && dstsize - (dst_len + src_len) - 1)
		dst[dst_len + src_len++] = *src++;
	dst[dst_len + src_len] = '\0';
	while (*src++)
		src_len++;
	return (dst_len + src_len);
}
