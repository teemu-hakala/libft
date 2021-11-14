/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakala <thakala@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:49:18 by thakala           #+#    #+#             */
/*   Updated: 2021/11/14 18:11:04 by thakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_beginning;
	size_t	length;

	length = ft_strlen(s);
	new_beginning = (char *)malloc(sizeof(char) * (length + (size_t)1));
	if (!length && !new_beginning)
		return (NULL);
	while (*s)
		*new_beginning++ = f(*s++);
	*new_beginning = *s;
	return (new_beginning - length);
}
