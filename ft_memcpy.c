/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:58:22 by thakala           #+#    #+#             */
/*   Updated: 2021/11/04 20:06:46 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*destination;
	char	*source;
	char	*new_beginning;

	destination = (char *)dst;
	source = (char *)src;
	new_beginning = dst;
	while (n--)
		*destination++ = *source++;
	return (new_beginning);
}
