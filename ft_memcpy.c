/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:58:22 by thakala           #+#    #+#             */
/*   Updated: 2021/11/21 17:50:46 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (n == 0 || (!dst && !src))
		return (dst);
	n++;
	while (n--)
		((unsigned char *)dst)[n - 1] = ((unsigned char *)src)[n - 1];
	return (dst);
}
