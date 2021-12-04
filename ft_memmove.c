/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:35:21 by thakala           #+#    #+#             */
/*   Updated: 2021/12/04 19:12:27 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!len)
		return (dst);
	i = (size_t)(-1);
	if (src < dst)
	{
		while (1)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			if (len > 1)
				len--;
			else
				break ;
		}
	}
	else if (src > dst)
		while (++i < len)
			((char *)dst)[i] = ((char *)src)[i];
	return (dst);
}
