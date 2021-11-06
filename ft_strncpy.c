/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:37:45 by thakala           #+#    #+#             */
/*   Updated: 2021/11/06 14:30:02 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*new_beginning;

	if (!dst || !src)
		return (NULL);
	new_beginning = dst;
	while (*src && len)
	{
		*dst++ = *src++;
		len--;
	}
	while (len--)
		*dst++ = '\0';
	return (new_beginning);
}
