/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:22:39 by thakala           #+#    #+#             */
/*   Updated: 2021/11/28 12:32:56 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strpbrk(const char *s, const char *charset)
{
	size_t	c;

	c = 0;
	--s;
	while (*++s)
		while (charset[c])
			if (charset[c++] == *s)
				return (s);
	return (NULL);
}
