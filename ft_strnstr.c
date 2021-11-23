/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:25:07 by thakala           #+#    #+#             */
/*   Updated: 2021/11/23 15:56:36 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;

	while (len > 0 && *haystack)
	{
		n = 0;
		while (len > n && needle[n] && haystack[n] == needle[n])
			n++;
		if (!needle[n])
			return ((char *)haystack);
		len--;
		haystack++;
	}
	if (!*needle)
		return ((char *)haystack);
	return (NULL);
}
