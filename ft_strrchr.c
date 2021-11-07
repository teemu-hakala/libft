/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:04:07 by thakala           #+#    #+#             */
/*   Updated: 2021/11/07 19:08:10 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*result;

	if (!s)
		return (NULL);
	result = NULL;
	while (*s)
		if (*s++ == (char)c)
			result = s - 1;
	if (*s == c)
		result = s;
	return ((char *)result);
}
