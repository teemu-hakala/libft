/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:35:21 by thakala           #+#    #+#             */
/*   Updated: 2021/11/11 09:00:25 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!len)
		return (dst);
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
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
