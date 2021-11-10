/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:45:42 by thakala           #+#    #+#             */
/*   Updated: 2021/11/10 15:16:40 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	h;
	size_t	n;

	h = 0;
	while (haystack[h])
	{
		n = 0;
		while (needle[n] && haystack[h + n] == needle[n])
			n++;
		if (!needle[n])
			return ((char *)&haystack[h]);
		h++;
	}
	if (!*needle)
		return ((char *)haystack);
	return (NULL);
}
