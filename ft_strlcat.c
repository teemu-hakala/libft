/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:38:59 by thakala           #+#    #+#             */
/*   Updated: 2021/11/08 18:50:15 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;

	dst_len = 0;
	while (*dst)
	{
		dst++;
		dst_len++;
	}
	if (dstsize != 0 && dst_len < --dstsize)
		dst[dstsize] = '\0';
	while (dst_len < dstsize)
	{
		dst[dstsize - dst_len - 1] = src[dstsize - dst_len - 1];
		dstsize--;
	}
	return (dst_len + ft_strlen(src));
}
