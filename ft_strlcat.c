/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:38:59 by thakala           #+#    #+#             */
/*   Updated: 2021/11/13 16:41:16 by thakala          ###   ########.fr       */
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
	i = (size_t)0;
	while (src[i] && dst_len < dstsize && i < dstsize - dst_len - (size_t)1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dstsize > 0 && dst_len < dstsize)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
