/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:58:37 by thakala           #+#    #+#             */
/*   Updated: 2021/11/10 11:03:15 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*string;
	unsigned char	character;

	string = (unsigned char *)b;
	character = (unsigned char)c;
	while (len-- > 0)
		*string++ = character;
	return (b);
}
