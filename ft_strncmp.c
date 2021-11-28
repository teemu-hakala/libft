/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:41:30 by thakala           #+#    #+#             */
/*   Updated: 2021/11/28 17:57:30 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (*s1++ == *s2++ && *(s1 - 1) && --n > 0)
		;
	return ((unsigned char)*(s1 - 1) - (unsigned char)*(s2 - 1));
}
