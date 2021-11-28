/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:02:00 by thakala           #+#    #+#             */
/*   Updated: 2021/11/28 18:20:27 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strspn(const char *s, const char *charset)
{
	size_t	span;
	size_t	c;

	span = 0;
	--s;
	while (1)
	{
		++s;
		c = 0;
		while (charset[c])
			if (charset[c] != *s || !*s)
				return (span);
	}
}
