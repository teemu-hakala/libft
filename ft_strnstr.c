/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:25:07 by thakala           #+#    #+#             */
/*   Updated: 2021/11/10 15:54:23 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	while (len > 0 && haystack[h])
	{
		n = 0;
		while (len - n > 0 && needle[n] && haystack[h + n] == needle[n])
			n++;
		if (!needle[n])
			return ((char *)&haystack[h]);
		len--;
		h++;
	}
	if (!*needle)
		return ((char *)haystack);
	return (NULL);
}
