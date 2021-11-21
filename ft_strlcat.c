/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:38:59 by thakala           #+#    #+#             */
/*   Updated: 2021/11/21 22:16:43 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len > dstsize)
		return (src_len + dstsize);
	else if (dst_len == dstsize)
		return (dst_len + src_len);
	i = dstsize - dst_len;
	if (i > src_len)
		i = src_len + 1;
	if (dstsize > 0)
		dst[dst_len + i - 1] = '\0';
	while (--i)
		dst[dst_len + i - 1] = src[i - 1];
	return (dst_len + src_len);
}
