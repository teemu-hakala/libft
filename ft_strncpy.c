/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:37:45 by thakala           #+#    #+#             */
/*   Updated: 2021/11/21 19:15:21 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*new_beginning;

	new_beginning = dst;
	while (*src && len--)
		*dst++ = *src++;
	while (len-- + 1 && len != (size_t)(-1))
		*dst++ = '\0';
	return (new_beginning);
}
