/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 05:38:53 by thakala           #+#    #+#             */
/*   Updated: 2021/11/21 18:19:07 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n)
		return (n);
	while (--n && *((unsigned char *)s1) == *((unsigned char *)s2))
	{
		s1++;
		s2++;
	}
	return ((int)(*((unsigned char *)s1) - *((unsigned char *)s2)));
}
