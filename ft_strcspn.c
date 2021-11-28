/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:07:00 by thakala           #+#    #+#             */
/*   Updated: 2021/11/28 19:20:59 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcspn(const char *s, const char *charset)
{
	size_t	span;
	size_t	c;
	char	found;

	if (!*s)
		return (0);
	while (1)
	{
		c = 0;
		found = 0;
		while (charset[c])
		{
			if (charset[c++] == *s)
				found = 1;
			else
			{
				span++;
				break ;
			}
		}
		if (found || !*++s)
			return (span);
	}
}
