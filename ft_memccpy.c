/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:51:48 by thakala           #+#    #+#             */
/*   Updated: 2021/11/20 18:53:44 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!n)
		return (NULL);
	while (--n && *source != (unsigned char)c)
		*destination++ = *source++;
	*destination++ = *source;
	if (*source == (unsigned char)c)
		return (destination);
	return (NULL);
}
