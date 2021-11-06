/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:20:45 by thakala           #+#    #+#             */
/*   Updated: 2021/11/06 14:04:55 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*new_beginning;

	if (!dst || !src)
		return (NULL);
	new_beginning = dst;
	while (*src)
		*dst++ = *src++;
	*dst = *src;
	return (new_beginning);
}
